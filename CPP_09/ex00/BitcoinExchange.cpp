/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/09 12:09:31 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool isDataBaseCorrect(BitcoinExchange const &btce)
{
    std::ifstream infile("data.csv");
    std::string date;
    struct tm tm;
    (void)btce;
    
    std::getline(infile, date);
    while (std::getline(infile, date))
    {
        size_t pos = date.find(",");
        std::string value = date.substr(pos);
        date.resize(date.size() - value.size());
        if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
            return false;
    }
    return true;
}

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
