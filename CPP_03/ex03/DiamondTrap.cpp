/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:22:49 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/21 10:06:15 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout << GRAY << "DiamondTrap default constructor called" << RESET << std::endl;
    this->DiamondTrap::_name = "Unknown";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << GRAY << BOLD << "DiamondTrap overloaded constructor called" << RESET << std::endl;
    ClapTrap::_name = name + "_clap_name";
    this->DiamondTrap::_name = name;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) : FragTrap(rhs), ScavTrap(rhs)
{
    std::cout << BLUE << "DiamondTrap copy constructor called" << RESET << std::endl;
    *this = rhs;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap " << this->DiamondTrap::_name << " destructor called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
    if (this != &rhs)
    {
        std::cout << YELLOW << "DiamondTrap copy assignment operator called" << RESET << std::endl;
        this->DiamondTrap::_name = rhs.DiamondTrap::_name;
    }
    return *this;
}

std::string DiamondTrap::getDiamondName()
{
    return this->DiamondTrap::_name;
}

void DiamondTrap::setDiamondName(std::string name)
{
    this->DiamondTrap::_name = name;
}