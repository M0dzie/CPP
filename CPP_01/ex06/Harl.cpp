/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:30:04 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 14:27:27 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
    int i;
    std::string arrLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (i = 0; i < 4; i++)
        if (arrLevel[i] == level)
            break;
    switch (i)
    {
    case 0:
        this->debug();
    case 1:
        this->info();
    case 2:
        this->warning();
    case 3:
        this->error();
        break;
    default:
        std::cout << "Unknown command !" << std::endl;
        break;
    }
}

void Harl::debug() const
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. \
I really do !" << std::endl;
}

void Harl::info() const
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! \
If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning() const
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas \
you started working here since last month" << std::endl;
}

void Harl::error() const
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}