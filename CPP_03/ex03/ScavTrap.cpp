/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:00:07 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/21 13:03:07 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << PURPLE << "ScavTrap default constructor called" << RESET << std::endl;
    this->_name = "Unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << PURPLE << BOLD << "ScavTrap overloaded constructor called" << RESET << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
    std::cout << BLUE << "ScavTrap copy constructor called" << RESET << std::endl;
    *this = rhs;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << this->_name << " destructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    if (this != &rhs)
    {
        std::cout << YELLOW << "ScavTrap copy assignment operator called" << RESET << std::endl;
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "(ScavTrap attack) " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!"
	<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->_name << " is now in Gate keeper mode!" << std::endl;
}