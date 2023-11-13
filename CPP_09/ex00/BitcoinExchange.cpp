/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/13 11:30:44 by thmeyer          ###   ########.fr       */
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
    return false;
}

static bool haveWrongChar(std::string value)
{
    int comas = 0;
    if (value.empty() || (std::isspace(value[0]) && !value[1]))
        return true;
    for (size_t i = 0; i < value.size(); i++)
    {
        if (value[i] == '.')
            comas++;
        if (!std::isdigit(value[i]) && value[i] != '.' && !std::isspace(value[i]))
            return true;
    }
    if (comas > 1)
        return true;
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
    if (y < 2009 || y > 2023)
        return false;
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
        date.resize(date.size() - value.size() - 1);
        if (!isDateValid(date))
            throw BitcoinExchange::InvalidDateDataBase();
        if (haveWrongChar(value))
            throw BitcoinExchange::InvalidExchangeRate();
        std::istringstream iss(value);
        float valueFloat;
        iss >> valueFloat;
        this->_dataBase.insert(std::pair<std::string, float>(date, valueFloat));
    }
    return true;
}

void BitcoinExchange::displayInput(std::string const &input)
{
    std::ifstream infile(input.c_str());
    std::string date;

    std::getline(infile, date);
    if (date != "date | value")
    {
        infile.clear();
        infile.seekg(0);
    }
    while (std::getline(infile, date))
    {
        size_t pos = date.find("|");
        if (pos == std::string::npos)
        {
            displayErrorMessage("bad input => " + date);
            continue;
        }
        std::string value = date.substr(pos + 1);
        date.resize(date.size() - value.size() - 1);
        if (!isDateValid(date))
        {
            displayErrorMessage("bad input => " + date);
            continue;
        }
        if (haveWrongChar(value))
        {
            displayErrorMessage("bad input => " + date);
            continue;
        }
        std::istringstream iss(value);
        float valueFloat;
        iss >> valueFloat;
        if (valueFloat < 0 || valueFloat > 1000)
        {
            if (valueFloat < 0)
                displayErrorMessage("not a positive number.");
            else
                displayErrorMessage("too large a number.");
            continue;
        }
        std::map<std::string, float>::iterator it;
        if (this->_dataBase.find(date) != this->_dataBase.end())
            it = this->_dataBase.find(date);
        else
            it = --this->_dataBase.lower_bound(date);
        float dataFloat = it->second;
        std::cout << date << "=> " << valueFloat << " = " << valueFloat * dataFloat << std::endl;
    }
}