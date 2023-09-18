/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:24:41 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 18:39:24 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(0, 0), b(5, 0), c(0, 3), point(1, 1);
    std::cout << "Result : " << bsp(a, b, c, point) << " answer : 1" << std::endl;
    return 0;
}