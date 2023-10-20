/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:45:44 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/20 11:44:37 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &rhs)
{
    *this = rhs;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string value)
{
    toChar(value);
    toInt(value);
    toFloat(value);
    toDouble(value);
}

void ScalarConverter::toChar(std::string value)
{
}

void ScalarConverter::toInt(std::string value)
{
}

void ScalarConverter::toFloat(std::string value)
{
}

void ScalarConverter::toDouble(std::string value)
{
}