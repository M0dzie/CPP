/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:29:24 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/15 22:00:04 by thmeyer          ###   ########.fr       */
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

Fixed &Fixed::operator=(const Fixed&)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    this->_number = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return Fixed::_nBits;
}