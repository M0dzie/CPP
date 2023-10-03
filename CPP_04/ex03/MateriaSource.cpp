/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:25:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 17:20:25 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
    *this = rhs;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        delete[] this->_memory;
        for (int i = 0; i < 4; i++)
            this->_memory[i] = rhs._memory[i];
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    delete[] this->_memory;
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