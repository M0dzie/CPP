/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:47:34 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/14 10:21:53 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static void displayErrorMessage(std::string const &msg)
{
    std::cerr << RED << BOLD << "Error: " << RESET << msg << std::endl;
}

bool isOperator(int c)
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
        {
            std::istringstream iss(arg.substr(i));
            int digit;
            iss >> digit;
            if (digit < 0 || digit > 9)
                return (displayErrorMessage("This program accept only digits [0-9]"), false);
            digits++;
        }
        if (isOperator(arg[i]))
            operators++;
        if (!std::isdigit(arg[i]) && !std::isspace(arg[i]) && !isOperator(arg[i]))
            return (displayErrorMessage("it's not a valid inverted Polish mathematical expression"), false);
    }
    if (digits - 1 != operators)
        return (displayErrorMessage("Too many digit for the amount of operators"), false);
    return true;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (displayErrorMessage("the program must take only one parameter"), 1);
    if (!isValid(argv[1]))
        return 1;
    try
    {
        RPN rpn(argv[1]);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}