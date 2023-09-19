/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:39:58 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 11:08:09 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << BOLD << GREEN << "Overloaded constructor called" << RESET << std::endl;
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