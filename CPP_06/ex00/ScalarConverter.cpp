/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:45:44 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/22 17:06:30 by thmeyer          ###   ########.fr       */
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

static bool isPseudoLiterals(std::string input, int type)
{
    if (input == "nan" || input == "nanf" || input == "-inf" || input == "-inff" \
    || input == "inf" || input == "inff" || input == "+inf" || input == "+inff")
    {
        if (type == INT || type == CHAR)
            std::cout << "impossible" << std::endl;
        else if (type == FLOAT && (input == "nan" || input == "-inf" || input == "inf" || input == "+inf"))
            std::cout << input << "f" << std::endl;
        else if (type == FLOAT)
            std::cout << input << std::endl;
        else if (type == DOUBLE  && (input == "nanf" || input == "-inff" || input == "inff" || input == "+inff"))
        {
            input.resize(input.size() -1);
            std::cout << input << std::endl;
        }
        else
            std::cout << input << std::endl;
        return true;
    }
    return false;
}

void ScalarConverter::toChar(std::string input)
{
    std::cout << "char: ";
    if (isPseudoLiterals(input, CHAR))
        return;
    int charInput = std::atoi(input.c_str());
    if (charInput >= 32 && charInput <= 126)
        std::cout << "'" << static_cast<char>(charInput) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void ScalarConverter::toInt(std::string input)
{
    std::cout << "int: ";
    if (isPseudoLiterals(input, INT))
        return;
}

void ScalarConverter::toFloat(std::string input)
{
    std::cout << "float: ";
    if (isPseudoLiterals(input, FLOAT))
        return;
}

void ScalarConverter::toDouble(std::string input)
{
    std::cout << "double: ";
    if (isPseudoLiterals(input, DOUBLE))
        return;
}