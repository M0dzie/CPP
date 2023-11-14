/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:51 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/14 10:57:59 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static void displayStack(std::stack<int> stack)
{
    int index = 1;
    while (!stack.empty())
    {
        std::cout << BLACK << index << "th element : " << RESET << static_cast<char>(stack.top()) << std::endl;
        stack.pop();
        index++;
    }
}

RPN::RPN (std::string const &arg)
{
    for (size_t i = 0; i < arg.size(); i++)
    {
        if (std::isdigit(arg[i]))
            this->_digit.push(arg[i]);
        if (isOperator(arg[i]))
            this->_operator.push(arg[i]);
    }
    std::cout << BLACK << "Display digit : " << RESET << std::endl;
    displayStack(this->_digit);
    std::cout << std::endl;
    std::cout << BLACK << "Display operator : " << RESET << std::endl;
    displayStack(this->_operator);
}

RPN::RPN (RPN const &rhs) : _digit(rhs._digit), _operator(rhs._operator) {}

RPN &RPN::operator=(RPN const &rhs)
{
    if (this != &rhs)
    {
        this->_digit = rhs._digit;
        this->_operator = rhs._operator;
    }
    return *this;
}

RPN::~RPN () {}