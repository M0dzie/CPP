/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:00:07 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 14:05:53 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << PURPLE << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << PURPLE << BOLD << "ScavTrap overloaded constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
    std::cout << BLUE << "ScavTrap copy constructor called" << RESET << std::endl;
    *this = rhs;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << this->getName() << " destructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    if (this != &rhs)
        std::cout << YELLOW << "ScavTrap copy assignment operator called" << RESET << std::endl;
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!"
	<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->getName() << " is now in Gate keeper mode!" << std::endl;
}