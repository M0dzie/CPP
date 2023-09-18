/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:30:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 19:22:26 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
public:
    Point(void);
    Point(float const x, float const y);
    Point(Point const &src);
    Point &operator=(Point const &);
    ~Point(void);
    float getX(void) const;
    float getY(void) const;

private:
    Fixed const _x;
    Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif