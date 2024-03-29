/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:51 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/22 18:36:58 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN (std::string const &arg)
{
    for (std::string::const_reverse_iterator it = arg.rbegin(); it != arg.rend(); ++it)
    {
        if (std::isdigit(*it))
            this->_digit.push(*it - 48);
        if (isOperator(*it))
            this->_operator.push(*it);
    }
    this->doCalculate();
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

void RPN::doCalculate()
{
    long result = this->_digit.top();

    this->_digit.pop();
    while (!this->_digit.empty())
    {
        if (this->_operator.top() == '+')
            result += this->_digit.top();
        else if (this->_operator.top() == '-')
            result -= this->_digit.top();
        else if (this->_operator.top() == '*')
            result *= this->_digit.top();
        else
        {
            if (this->_digit.top() == 0)
                return (displayErrorMessage("We can't divide by 0"));
            result /= this->_digit.top();
        }
        this->_digit.pop();
        this->_operator.pop();
    }
    std::cout << GREEN << BOLD << "Result : " << RESET << result << std::endl;
}