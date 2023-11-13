/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:29:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/13 09:18:09 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void displayErrorMessage(std::string msg)
{
    std::cerr << RED << msg << RESET << std::endl;
}

static bool isValidFile(char const *argv)
{
    std::ifstream file;

    file.open(argv);
    if (file)
        return (file.close(), true);
    return false;
}

int main(int argc, char **argv)
{
    if (argc != 2 || !isValidFile(argv[1]) || !isValidFile("data.csv"))
        return (displayErrorMessage("Error: could not open file."), 1);
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