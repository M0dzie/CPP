/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseDataBase.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:17:21 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/09 10:54:44 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

bool isDateValid(std::string date)
{
    (void)date;
    return true;
}

bool isDataBaseCorrect()
{
    std::ifstream infile("data.csv");
    std::string date;

    while (std::getline(infile, date))
    {   
        size_t pos = date.find(",");
        std::string value = date.substr(pos);
        
    }
    return true;
}