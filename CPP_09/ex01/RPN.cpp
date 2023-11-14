/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:51 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/14 12:28:05 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static void displayDigit(std::stack<int> stack)
{
    int index = 1;
    while (!stack.empty())
    {
        std::cout << BLACK << index << "th element : " << RESET << stack.top() << std::endl;
        stack.pop();
        index++;
    }
}

static void displayOperator(std::stack<int> stack)
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
    for (std::string::const_reverse_iterator it = arg.rbegin(); it != arg.rend(); ++it)
    {
        if (std::isdigit(*it))
            this->_digit.push(*it - 48);
        if (isOperator(*it))
            this->_operator.push(*it);
    }
    std::cout << BLACK << "Display digit : " << RESET << std::endl;
    displayDigit(this->_digit);
    std::cout << std::endl;
    std::cout << BLACK << "Display operator : " << RESET << std::endl;
    displayOperator(this->_operator);
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
    int result = this->_digit.top();

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
            result /= this->_digit.top();
        this->_digit.pop();
        this->_operator.pop();
    }
    std::cout << BLACK << "Result : " << RESET << result << std::endl;
}