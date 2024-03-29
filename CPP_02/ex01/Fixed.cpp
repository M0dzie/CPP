/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:40:11 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 13:41:30 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nFractionalBits = 8;

Fixed::Fixed() : _fixedPointNumberValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const newInt)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(newInt << Fixed::_nFractionalBits);
}

Fixed::Fixed(float const newFloat)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(newFloat * (1 << Fixed::_nFractionalBits)));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(src.getRawBits());
    return *this;
}

std::ostream &operator<<(std::ostream &outPut, Fixed const &src)
{
    outPut << src.toFloat();
    return outPut;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointNumberValue = raw;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPointNumberValue;
}

int Fixed::toInt(void) const
{
    return (this->getRawBits() >> Fixed::_nFractionalBits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->getRawBits() / (1 << Fixed::_nFractionalBits));
}