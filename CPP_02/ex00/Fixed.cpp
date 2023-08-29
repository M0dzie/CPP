/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:29:24 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 16:57:44 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nBits = 0;

Fixed::Fixed() : _number(0) {}

Fixed::Fixed(const Fixed&) {}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed&) {}

void Fixed::setRawBits( int const raw ) {}

int Fixed::getRawBits( void ) const {}