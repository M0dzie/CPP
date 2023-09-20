/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:45:55 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 16:05:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << CYAN << "FragTrap default constructor called" << RESET << std::endl;
    this->_name = "Unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << CYAN << BOLD << "FragTrap overloaded constructor called" << RESET << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
    std::cout << BLUE << "FragTrap copy constructor called" << RESET << std::endl;
    *this = rhs;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "FragTrap " << this->_name << " destructor called" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    if (this != &rhs)
    {
        std::cout << YELLOW << "FragTrap copy assignment operator called" << RESET << std::endl;
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::string answer;

    std::cout << "High Five ? (Yes/No) ";
    getline(std::cin, answer);
    if (answer == "Yes")
        std::cout << this->_name << ": Yes my man ! *clap*" << std::endl;
    else if (answer == "No")
        std::cout << this->_name << ": Come on bro..." << std::endl;
    else
        std::cout << this->_name << ": You're not funny!" << std::endl;
}