/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:45:44 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/22 16:39:17 by thmeyer          ###   ########.fr       */
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
    (void)rhs;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string input)
{
    toChar(input);
    toInt(input);
    toFloat(input);
    toDouble(input);
}

static bool checkPseudoLiterals(std::string input)
{
    if (input == "nan" || input == "nanf" || input == "-inf" || input == "-inff" \
    || input == "inf" || input == "inff" || input == "+inf" || input == "+inff")
    {
        std::cout << "impossible" << std::endl;
        return true;
    }
    return false;
}

void ScalarConverter::toChar(std::string input)
{
    std::cout << "char: ";

    if (checkPseudoLiterals(input))
        return;
    int charInput = std::atoi(input.c_str());
    if (charInput >= 32 && charInput <= 126)
        std::cout << static_cast<char>(charInput) << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void ScalarConverter::toInt(std::string input)
{
    (void)input;
}

void ScalarConverter::toFloat(std::string input)
{
    (void)input;
}

void ScalarConverter::toDouble(std::string input)
{
    (void)input;
}