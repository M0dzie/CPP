/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:10:08 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 13:28:16 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() : _name("Unknown"), _idx(0) {}

ICharacter::ICharacter(std::string name) : _name(name), _idx(0) {}

ICharacter::ICharacter(ICharacter const &rhs) : _name("Unknown"), _idx(0)
{
    *this = rhs;
}

ICharacter &ICharacter::operator=(ICharacter const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_idx = rhs._idx;
        delete[] this->_inventory;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = rhs._inventory[i];
    }
    return *this;
}

ICharacter::~ICharacter()
{
    delete[] this->_inventory;
}

void ICharacter::setName(std::string name)
{
    this->_name = name;
}

std::string const &ICharacter::getName() const
{
    return this->_name;
}

void ICharacter::equip(AMateria *m)
{
    if (this->_idx > 3)
    {
        std::cout << RED << "inventory is full" << RESET << std::endl;
        return;
    }
    this->_inventory[this->_idx] = m;
    std::cout << "Materia " << m->getType() << " added in inventory, in slot number : " << this->_idx << std::endl;
}

void ICharacter::unequip(int idx)
{
    if (!this->_inventory[idx] || (idx > 3 || idx < 0))
    {
        if (!this->_inventory[idx])
            std::cout << RED << "The Materia you want to use is unavailable" << RESET << std::endl;
        else
            std::cout << RED << "Plese choose a slot between 0 and 3" << RESET << std::endl;
        return ;
    }
    this->_inventory[idx] = NULL;
    std::cout << "Inventory[" << idx << "] is now free" << std::endl;
}

void ICharacter::use(int idx, ICharacter &target)
{
    if (!this->_inventory[idx] || (idx > 3 || idx < 0))
    {
        if (!this->_inventory[idx])
            std::cout << RED << "The Materia you want to use is unavailable" << RESET << std::endl;
        else
            std::cout << RED << "Plese choose a slot between 0 and 3" << RESET << std::endl;
        return ;
    }
    
}