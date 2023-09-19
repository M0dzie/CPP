/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:33:23 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 09:32:31 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(const Point &src) : _x(src.getX()), _y(src.getY())
{
    *this = src;
}

Point &Point::operator=(const Point &)
{
    return *this;
}

Point::~Point() {}

float Point::getX(void) const
{
    return this->_x.toFloat();
}

float Point::getY(void) const
{
    return this->_y.toFloat();
}