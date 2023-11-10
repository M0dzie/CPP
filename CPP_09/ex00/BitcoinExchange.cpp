/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/10 11:30:03 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const &input)
{
    (void)input;
    if (!this->isDataBaseCorrect())
        throw BitcoinExchange::ErrorFormatDataBase();
    this->displayInput(input);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs) : _dataBase(rhs._dataBase) {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this != &rhs)
        this->_dataBase = rhs._dataBase;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

static bool haveChar(std::string str, char c)
{
    for (size_t i = 0; i < str.size(); i++)
        if (str[i] == c)
            return true;

    // add quelque chose qui marche
    // for (size_t i = 0; i < str.size(); i++)
    //     if (!std::isdigit(str[i]))
    //         return false;
    return false;
}

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
        if (!haveChar(date, ','))
            return false;
        size_t pos = date.find(",");
        if (pos == std::string::npos || date[date.size() - 1] == ',')
            return false;
        std::string value = date.substr(pos + 1);
        if (value.find(",") != std::string::npos)
            return false;
        date.resize(date.size() - value.size() - 1);
        if (!isDateValid(date))
            throw BitcoinExchange::InvalidDateDataBase();
        std::istringstream iss(value);
        float valueFloat;
        iss >> valueFloat;
        this->_dataBase.insert(std::pair<std::string, float>(date, valueFloat));
    }
    return true;
}

void BitcoinExchange::displayInput(std::string const &input)
{
    std::ifstream infile(input);
    std::string date;

    std::getline(infile, date);
    if (date != "date | value")
        throw BitcoinExchange::ErrorFormatInput();
    while (std::getline(infile, date))
    {
        size_t pos = date.find("|");
        if (pos == std::string::npos)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        std::string value = date.substr(pos + 1);
        date.resize(date.size() - value.size() - 1);
        std::cout << date << std::endl;
    }
}