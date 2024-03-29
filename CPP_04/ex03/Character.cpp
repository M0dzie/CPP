/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:10:08 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/10 13:53:20 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unknown")
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        this->_floor[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        this->_floor[i] = NULL;
}

Character::Character(Character const &rhs)
{
    *this = rhs;
}

Character &Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
    for (int i = 0; i < 4; i++)
        if (this->_floor[i])
            delete this->_floor[i];
}

void Character::setName(std::string name)
{
    this->_name = name;
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << RED << "This materia doesn't exist" << RESET << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == m)
        {
            std::cout << RED << "This materia is already equipped" << RESET << std::endl;
            return ;
        }
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            std::cout << "Materia " << m->getType() << " added in inventory in slot : " << i << std::endl;
            return;
        }
    }
    delete m;
    std::cout << RED << "inventory is full" << RESET << std::endl;
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << RED << "Plese choose a slot between 0 and 3" << RESET << std::endl;
        return ;
    }
    if (!this->_inventory[idx])
    {
        std::cout << RED << "The Materia you want to unequip is unavailable" << RESET << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!this->_floor[i])
        {
            this->_floor[i] = this->_inventory[idx]->clone();
            delete this->_inventory[idx];
            break ;
        }
        if (i == 3)
        {
            delete this->_floor[0];
            this->_floor[0] = this->_inventory[idx]->clone();
            delete this->_inventory[idx];
            break;
        }
    }
    this->_inventory[idx] = NULL;
    std::cout << "You left the materia on the floor. Inventory[" << idx << "] is free" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << RED << "Plese choose a slot between 0 and 3" << RESET << std::endl;
        return ;
    }
    if (!this->_inventory[idx])
    {
        std::cout << RED << "The Materia you want to use is unavailable" << RESET << std::endl;
        return ;
    }
    this->_inventory[idx]->use(target);
    delete this->_inventory[idx];
    this->_inventory[idx] = NULL;
}