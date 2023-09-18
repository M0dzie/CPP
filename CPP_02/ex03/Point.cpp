/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:33:23 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 19:23:42 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(const Point &src) : _x(src.getX()), _y(src.getY())
{
    std::cout << "bz bien tamer";
    *this = src;
}

Point &Point::operator=(const Point &)
{
    return *this;
}

Point::~Point() {}

float Point::getX(void) const
{
    std::cout << "toFloat(x) : " << this->_x.toFloat() << std::endl;
    return this->_x.toFloat();
}

float Point::getY(void) const
{
    std::cout << "toFloat(y) : " << this->_y.toFloat() << std::endl;;
    return this->_y.toFloat();
}