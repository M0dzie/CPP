/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:40:11 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 10:45:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nFractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Defaut constructor called" << std::endl;
}

Fixed::Fixed(int const newInt) : _fixedPointNumberValue(newInt)
{
    std::cout << "Int constructor called" << std::endl;
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

Fixed &Fixed::operator=(Fixed const &)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}