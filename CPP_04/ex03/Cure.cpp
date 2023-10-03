/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:45:29 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 18:31:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    this->_type = "cure";
}

Cure::Cure(Cure const &rhs) : AMateria(rhs)
{
    *this = rhs;
}

Cure &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
        this->_type = rhs._type;
    }
    return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const
{
    AMateria *newMateria = new Cure();

    return newMateria;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}