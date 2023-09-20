/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:59:14 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 14:38:27 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ClapTrap::alive(1);

ClapTrap::ClapTrap() : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN << BOLD << "ClapTrap overloaded constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << BLUE << "ClapTrap copy constructor called" << RESET << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap " << this->_name << " destructor called" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		std::cout << YELLOW << "ClapTrap copy assignment operator called" << RESET << std::endl;
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << BLACK << this->_name << " can't attack... I mean, he's dead." << RESET << std::endl;
		return;
	}
	if (!ClapTrap::alive)
	{
		std::cout << BLACK << target << "'s already dead... Please, stop." << RESET << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << BLACK << this->_name << " doesn't have enough energy points to attack !" << RESET << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!ClapTrap::alive)
		return ;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << this->_name << " lost " << amount << " points of health!" << std::endl;
	if (this->_hitPoints < 1)
	{
		std::cout << RED << BOLD << this->_name << " died." << RESET << std::endl;
		ClapTrap::alive = 0;
	}
	else
		std::cout << this->_name << " still have " << this->_hitPoints << "hp left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << BLACK << this->_name << " is dead, leave him alone, he can't be repaired." << RESET << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << BLACK << this->_name << " doesn't have enough energy points to repair !" << RESET << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << this->_name << " earned " << amount << " points of health!" << std::endl;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}
