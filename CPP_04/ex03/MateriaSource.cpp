/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:25:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/09 11:48:35 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
    *this = rhs;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
        //     for (int i = 0; i < 4; i++){
        //     if (_created[i])
        //         delete _created[i];
        //     if (other._created[i])
        //         _created[i] = other._created[i]->clone();
        //     else
        //         _created[i] = NULL;
        // }
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            this->_memory[i] = rhs._memory[i];
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->_memory[i] != NULL)
            delete this->_memory[i];
}

void MateriaSource::learnMateria(AMateria *rhs)
{
    int i = 0;

    while (this->_memory[i])
        i++;
    if (this->_memory[i])
    {
        std::cout << RED << "MateriaSource couldn't learn more than 4 materias" << RESET << std::endl;
        return ;
    }
    this->_memory[i] = rhs;
    std::cout << "MateriaSource learn a new " << rhs->getType() << " Materia" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 5;

    while (--i > 0)
    {
        if (this->_memory[i]->getType() == type)
            return this->_memory[i];
    }
    std::cout << RED << "The type is unknown" << RESET << std::endl;
    return 0;
}