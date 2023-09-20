/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:00:07 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 11:04:33 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << PURPLE << "Default ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << BLUE << "Copy ScavTrap constructor called" << RESET << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap destructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &)
{
    std::cout << YELLOW << "Copy assignment ScavTrap operator called" << RESET << std::endl;
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!"
	<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
}