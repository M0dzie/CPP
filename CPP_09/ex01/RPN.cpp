/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:51 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/14 10:17:24 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN (std::string const &arg)
{
    for (size_t i = 0; i < arg.size(); i++)
    {
        if (std::isspace(arg[i]))
            continue;
        if (std::isdigit(arg[i]))
            this->_digit.push(arg[i]);
    }
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