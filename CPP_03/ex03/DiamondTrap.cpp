/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:22:49 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 16:29:24 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << GRAY << "DiamondTrap default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    (void)name;
    std::cout << GRAY << BOLD << "DiamondTrap overloaded constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
{
    std::cout << BLUE << "DiamondTrap copy constructor called" << RESET << std::endl;
    *this = rhs;
}

DiamondTrap::~DiamondTrap()
{
    // std::cout << RED << "DiamondTrap " << this->_name << " destructor called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
    if (this != *rhs)
    {
        std::cout << YELLOW << "DiamondTrap copy assignment operator called" << RESET << std::endl;
    }
    return *this;
}