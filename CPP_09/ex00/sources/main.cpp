/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:29:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/09 10:54:31 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

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
    if (!isDataBaseCorrect())
        return (displayErrorMessage("Error: Wrong format in database"), 1);
    return 0;
}