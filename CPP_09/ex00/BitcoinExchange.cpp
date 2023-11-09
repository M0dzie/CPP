/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/09 12:51:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const &input)
{
    (void) input;
    if (!isDataBaseCorrect())
        throw BitcoinExchange::ErrorDataBase();
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
    struct tm tm;
    if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
        return false;

    int y, m, d;
    std::istringstream issY(date);
    issY >> y;
    std::istringstream issM(date.substr(5));
    issM >> m;
    std::istringstream issD(date.substr(8));
    issD >> d;

    if (d == 31 && (m == 4 || m == 6 || m == 9 || m == 11))
        return false;
    if (m == 2)
    {
        if (d > 29)
            return false;
        if (d == 29 && ((y % 100) % 4 != 0))
            return false;
    }
    
    return true;
}

bool BitcoinExchange::isDataBaseCorrect()
{
    std::ifstream infile("data.csv");
    std::string date;
    
    std::getline(infile, date);
    if (date != "date,exchange_rate")
        return false;
    while (std::getline(infile, date))
    {
        size_t pos = date.find(",");
        std::string value = date.substr(pos + 1);
        if (value.find(",") != std::string::npos)
            return false;
        date.resize(date.size() - value.size() - 1);
        if (!isDateValid(date))
            return false;
        std::istringstream iss(value);
        float valueFloat;
        iss >> valueFloat;
        std::cout << valueFloat << std::endl;
        this->_dataBase.insert(std::pair<std::string, float>(date, valueFloat));
    }
    
    return true;
}
