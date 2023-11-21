/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:29:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/21 16:22:52 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void displayErrorMessage(std::string const &msg)
{
    std::cerr << RED << BOLD << "Error: " << RESET << msg << std::endl;
}

static bool isValidFile(char const *argv)
{
    std::fstream file;

    file.open(argv);
    if (file)
        return (file.close(), true);
    return false;
}

int main(int argc, char **argv)
{
    if (argc != 2 || !isValidFile(argv[1]) || !isValidFile("data.csv"))
        return (displayErrorMessage("could not open file."), 1);
    try
    {
        BitcoinExchange btce(argv[1]);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}