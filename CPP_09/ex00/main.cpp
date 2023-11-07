/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:29:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/07 18:17:54 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp" 

static void displayErrorMessage(std::string msg)
{
    std::cerr << RED << msg << RESET << std::endl;
}

static bool isValidFile(char *argv)
{
    std::ifstream file;

    file.open(argv);
    if (file)
        return true;
    return false;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (displayErrorMessage("Error: This program must take a single file as argument."), 1);
    if (!isValidFile(argv[1]))
        return (displayErrorMessage("Error: could not open file."), 1);
    return 0;
}