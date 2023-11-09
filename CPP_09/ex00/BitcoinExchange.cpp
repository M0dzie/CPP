/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/09 11:19:49 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const &input)
{
    (void) input;
    if (!isDataBaseCorrect(*this))
        throw BitcoinExchange::ErrorInDataBase();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs) : _dataBase(rhs._dataBase), _input(rhs._input) {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this != &rhs)
    {
        this->_dataBase = rhs._dataBase;
        this->_input = rhs._input;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

static bool isDateValid(std::string date)
{
    (void)date;
    return true;
}

static bool isDataBaseCorrect(BitcoinExchange const &btce)
{
    std::ifstream infile("data.csv");
    std::string date;
    (void)btce;

    while (std::getline(infile, date))
    {   
        size_t pos = date.find(",");
        std::string value = date.substr(pos);
    }
    return true;
}