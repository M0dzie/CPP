/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:29:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/07 15:40:55 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp" 

static void displayErrorMessage(std::string msg)
{
    std::cerr << RED << msg << RESET << std::endl;
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
        return (displayErrorMessage("Error: This program must take a single file as argument"), 1);

    return 0;
}