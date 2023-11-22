/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:55:46 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/22 18:41:38 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static void displayErrorMessage(std::string const &msg)
{
    std::cerr << RED << BOLD << "Error: " << RESET << msg << std::endl;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        return (displayErrorMessage("The program take at least one paramter"), 1);
    try
    {
        PmergeMe merge(argc, argv);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}