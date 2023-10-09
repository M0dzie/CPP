/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:25:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/09 13:46:39 by thmeyer          ###   ########.fr       */
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
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_memory[i])
                delete this->_memory[i];
            if (rhs._memory[i])
                this->_memory[i] = rhs._memory[i]->clone();
            else
                this->_memory[i] = NULL;
        }
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
    for (int i = 0; i < 4; i++)
    {
        if (this->_memory[i] == NULL)
        {
            this->_memory[i] = rhs;
            std::cout << "MateriaSource learn a new " << rhs->getType() << " Materia" << std::endl;
            return ;
        }
    }
    std::cout << RED << "MateriaSource couldn't learn more than 4 materias" << RESET << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (this->_memory[i] && this->_memory[i]->getType() == type)
            return this->_memory[i];
    std::cout << RED << "The type is unknown" << RESET << std::endl;
    return 0;
}