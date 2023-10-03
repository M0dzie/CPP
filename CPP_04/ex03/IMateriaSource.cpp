/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:25:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 16:06:30 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {}

IMateriaSource::IMateriaSource(IMateriaSource const &rhs)
{
    *this = rhs;
}

IMateriaSource &IMateriaSource::operator=(IMateriaSource const &rhs)
{
    if (this != &rhs)
    {
        delete[] this->_memory;
        for (int i = 0; i < 4; i++)
            this->_memory[i] = rhs._memory[i];
    }
    return *this;
}

IMateriaSource::~IMateriaSource()
{
    delete[] this->_memory;
}

void IMateriaSource::learnMateria(AMateria *rhs)
{
    int i = 0;

    while (this->_memory[i])
        i++;
    if (this->_memory[i])
    {
        std::cout << RED << "IMateriaSource couldn't learn more than 4 materias" << RESET << std::endl;
        return ;
    }
    this->_memory[i] = rhs;
    std::cout << "IMateriaSource learn a new " << rhs->getType() << " Materia" << std::endl;
}

AMateria *IMateriaSource::createMateria(std::string const &type)
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