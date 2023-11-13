/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:47:34 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/13 17:26:25 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void displayErrorMessage(std::string const &msg)
{
    std::cerr << RED << BOLD << "Error: " << RESET << msg << std::endl;
}

static bool isOperator(int c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

static bool isValid(std::string const &arg)
{
    int digits = 0;
    int operators = 0;

    for (size_t i = 0; i < arg.size(); i++)
    {
        if (std::isdigit(arg[i]))
            digits++;
        if (isOperator(arg[i]))
            operators++;
        if (!std::isdigit(arg[i]) && !std::isspace(arg[i]) && !isOperator(arg[i]))
            return false;
    }
    if (digits - 1 != operators)
        return false;
    return true;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (displayErrorMessage("the program must take only one parameter"), 1);
    if (!isValid(argv[1]))
        return (displayErrorMessage("it's not a valid inverted Polish mathematical expression"), 1);
    return 0;
}