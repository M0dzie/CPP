/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:49:03 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 18:31:11 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    this->_type = "ice";
}

Ice::Ice(Ice const &rhs) : AMateria(rhs)
{
    *this = rhs;
}

Ice &Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
        this->_type = rhs._type;
    }
    return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const
{
    AMateria *newMateria = new Ice();

    return newMateria;
}

void Ice::use(ICharacter &target)
{
    std::cout << "*shoots an ice bolt at " << target.getName() << " *" << std::endl;
}