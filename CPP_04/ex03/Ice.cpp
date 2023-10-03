/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:49:03 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/02 17:48:18 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
    this->_type = "ice";
}

Ice::Ice(Ice const &rhs) : AMateria(rhs)
{
    this->_type = "ice";
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