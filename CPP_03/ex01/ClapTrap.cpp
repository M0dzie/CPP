/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:39:58 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 17:10:20 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ClapTrap::alive(1);

ClapTrap::ClapTrap() : _name("Unknown"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << GREEN << BOLD << "Overloaded constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &)
{
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << BLACK << "ClapTrap " << this->_name << " can't attack... I mean, he's dead." << RESET << std::endl;
		return;
	}
	if (!ClapTrap::alive)
	{
		std::cout << BLACK << "ClapTrap " << target << "'s already dead... Please, stop." << RESET << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << BLACK << "ClapTrap " << this->_name << " doesn't have enough energy points to attack !" << RESET << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!ClapTrap::alive)
		return ;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " points of health!" << std::endl;
	if (this->_hitPoints < 1)
	{
		std::cout << RED << BOLD << "ClapTrap " << this->_name << " died." << RESET << std::endl;
		ClapTrap::alive = 0;
	}
	else
		std::cout << "ClapTrap " << this->_name << " still have " << this->_hitPoints << "hp left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << BLACK << "ClapTrap " << this->_name << " is dead, leave him alone, he can't be repaired." << RESET << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << BLACK << "ClapTrap " << this->_name << " doesn't have enough energy points to repair !" << RESET << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " earned " << amount << " points of health!" << std::endl;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

std::string ClapTrap::getName()
{
	return this->_name;
}

int ClapTrap::getAttackDamage()
{
	return this->_attackDamage;
}

int ClapTrap::getHitPoints()
{
	return this->_hitPoints;
}