/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:14:35 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/02 16:41:19 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &rhs)
{
    *this = rhs;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::setType(std::string type)
{
    this->_type = type;
}

AMateria *AMateria::clone() const
{
    std::cout << RED << "AMateria can't clone itself" << RESET << std::endl;
    return NULL;
}

void AMateria::use(ICharacter &target)
{
    (void) target;
    std::cout << RED << "No type assigned" << RESET << std::endl;
}