/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:47:34 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/27 10:52:11 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void displayErrorMessage(std::string const &msg)
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
        if (std::isdigit(arg[i]) || (i != arg.size() - 1 && arg[i] == '-' && std::isdigit(arg[i + 1])))
        {
            std::istringstream iss(arg.substr(i));
            int digit;
            iss >> digit;
            if (digit < 0 || digit > 9)
                return (displayErrorMessage("This program accept only positive digits [0-9]"), false);
            digits++;
        }
        if (isOperator(arg[i]))
            operators++;
        if (!std::isdigit(arg[i]) && !std::isspace(arg[i]) && !isOperator(arg[i]))
            return (displayErrorMessage("it's not a valid inverted Polish mathematical expression"), false);
    }
    if (digits - 1 > operators)
        return (displayErrorMessage("Too many digits for the amount of operators"), false);
    if (digits - 1 < operators)
        return (displayErrorMessage("Too many operators for the amount of digits"), false);
    return true;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (displayErrorMessage("the program must take only one parameter"), 1);
    if (!isValid(argv[1]))
        return 1;
    RPN rpn(argv[1]);
    return 0;
}