/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:29:24 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 17:06:36 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nBits = 0;

Fixed::Fixed() : _number(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed&)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed&)
{
    std::cout << "Copy assignment operator called" << std::endl;
}

void Fixed::setRawBits( int const raw ) {}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
}