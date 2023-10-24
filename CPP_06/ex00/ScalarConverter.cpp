/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:45:44 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/24 16:08:25 by thmeyer          ###   ########.fr       */
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
    for (size_t i = 0; i < input.size(); i++)
        if (!std::isdigit(input[i]) && input[i] != '.' && input[i] != '+' && input[i] != '-' \
        && i != input.size() - 1)
            return (std::cout << "impossible" << std::endl, true);
    return false;
}

void ScalarConverter::toChar(std::string input)
{
    std::cout << "char: ";
    if (isPseudoLiterals(input, CHAR))
        return;
    if (input.size() == 1 && !std::isdigit(input[0]))
        std::cout << "'" << static_cast<char>(input[0]) << "'" << std::endl;
    else
    {
        std::istringstream iss(input);
        int charInput;
        iss >> charInput;
        if (charInput >= 32 && charInput <= 126)
            std::cout << "'" << static_cast<char>(charInput) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
}

void ScalarConverter::toInt(std::string input)
{
    std::cout << "int: ";
    if (isPseudoLiterals(input, INT))
        return;
    if (input.size() == 1 && !std::isdigit(input[0]))
        std::cout << static_cast<int>(input[0]) << std::endl;
    else
    {
        std::istringstream iss(input);
        long long intInput;
        iss >> intInput;
        if (intInput < std::numeric_limits<int>::min() || intInput > std::numeric_limits<int>::max())
            std::cout << "impossible" << std::endl;
        else
            std::cout << static_cast<int>(intInput) << std::endl;
    }
}

void ScalarConverter::toFloat(std::string input)
{
    std::cout << "float: ";
    if (isPseudoLiterals(input, FLOAT))
        return;
    if (input.size() == 1 && !std::isdigit(input[0]))
        std::cout << static_cast<float>(input[0]) << ".0f" << std::endl;
    else
    {
        std::istringstream iss(input);
        long double floatInput;
        iss >> floatInput;
        if (floatInput < -std::numeric_limits<float>::max() || floatInput > std::numeric_limits<float>::max())
            std::cout << "impossible" << std::endl;
        else
        {
            std::cout << static_cast<float>(floatInput);
            if (floatInput - static_cast<int>(floatInput) == 0)
                std::cout << ".0";
            std::cout << "f" << std::endl;
        }
    }
}

void ScalarConverter::toDouble(std::string input)
{
    std::cout << "double: ";
    if (isPseudoLiterals(input, DOUBLE))
        return;
    if (input.size() == 1 && !std::isdigit(input[0]))
        std::cout << static_cast<double>(input[0]) << ".0" << std::endl;
    else
    {
        std::istringstream iss(input);
        long double doubleInput;
        iss >> doubleInput;
        if (doubleInput < -std::numeric_limits<double>::max() || doubleInput > std::numeric_limits<double>::max())
            std::cout << "impossible" << std::endl;
        else
        {
            std::cout << static_cast<double>(doubleInput);
            if (doubleInput - static_cast<int>(doubleInput) == 0)
                std::cout << ".0";
            std::cout << std::endl;
        }
    }
}