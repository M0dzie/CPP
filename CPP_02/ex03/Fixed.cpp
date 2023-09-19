/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:25:34 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 09:30:17 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nFractionalBits = 8;

Fixed::Fixed() : _fixedPointNumberValue(0) {}

Fixed::Fixed(int const newInt)
{
    this->setRawBits(newInt << Fixed::_nFractionalBits);
}

Fixed::Fixed(float const newFloat)
{
    this->setRawBits(roundf(newFloat * (1 << Fixed::_nFractionalBits)));
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(Fixed const &src)
{
    this->setRawBits(src.getRawBits());
    return *this;
}

bool Fixed::operator>(Fixed const &src) const
{
    return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(Fixed const &src) const
{
    return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(Fixed const &src) const
{
    return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(Fixed const &src) const
{
    return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(Fixed const &src) const
{
    return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(Fixed const &src) const
{
    return (this->getRawBits() != src.getRawBits());
}

Fixed Fixed::operator+(Fixed const &src)
{
    Fixed result(this->toFloat() + src.toFloat());
    
    return result;
}

Fixed Fixed::operator-(Fixed const &src)
{
    Fixed result(this->toFloat() - src.toFloat());
    
    return result;
}

Fixed Fixed::operator*(Fixed const &src)
{
    Fixed result(this->toFloat() * src.toFloat());
    
    return result;
}

Fixed Fixed::operator/(Fixed const &src)
{
    Fixed result(this->toFloat() / src.toFloat());
    
    return result;
}

Fixed Fixed::operator++(int)
{
    Fixed saved(this->toFloat());

    ++*this;
    return saved;
}

Fixed &Fixed::operator++(void)
{
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed saved(this->toFloat());

    --*this;
    return saved;
}

Fixed &Fixed::operator--(void)
{
    this->setRawBits(this->getRawBits() - 1);
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

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
    if (left < right)
        return left;
    return right;
}

Fixed const &Fixed::min(Fixed const &left, Fixed const &right)
{
    if (left < right)
        return left;
    return right;
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
    if (left > right)
        return left;
    return right;
}

Fixed const &Fixed::max(Fixed const &left, Fixed const &right)
{
    if (left > right)
        return left;
    return right;
}