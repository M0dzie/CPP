/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:10:08 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 15:06:32 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() : _name("Unknown") {}

ICharacter::ICharacter(std::string name) : _name(name) {}

ICharacter::ICharacter(ICharacter const &rhs) : _name("Unknown")
{
    *this = rhs;
}

ICharacter &ICharacter::operator=(ICharacter const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
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
    int i = 0;
    while (this->_inventory[i])
        i++;
    if (this->_inventory[i])
    {
        std::cout << RED << "inventory is full" << RESET << std::endl;
        return;
    }
    this->_inventory[i] = m;
    std::cout << "Materia " << m->getType() << " added in inventory in slot :" << i << std::endl;
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
    this->_inventory[idx]->AMateria::use(target);
}