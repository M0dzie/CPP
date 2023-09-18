/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:33:30 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 19:20:09 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float aToB = (point.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (point.getY() - b.getY());
    float bToC = (point.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (point.getY() - c.getY());
    float aToC = (point.getX() - c.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (point.getY() - c.getY());
    std::cout << aToB << " and " << bToC << " and " << aToC << std::endl;
    if ((aToB > 0.0 && bToC > 0.0 && aToC > 0.0) || (aToB < 0.0 && bToC < 0.0 && aToC < 0.0))
        return false;
    return true;
}