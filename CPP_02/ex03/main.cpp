/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:24:41 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 10:18:54 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(0, 0), b(5, 0), c(0, 3), point(1, 1);
    std::cout << "Result : " << bsp(a, b, c, point) << " | answer : 1" << std::endl;
    Point d(0, 0), e(-5, 0), f(0, 3), point1(1, 1);
    std::cout << "Result : " << bsp(d, e, f, point1) << " | answer : 0" << std::endl;
    Point g(0, 0), h(5, 0), i(10, 3), point2(1, 1);
    std::cout << "Result : " << bsp(g, h, i, point2) << " | answer : 0" << std::endl;
    Point j(10, 0), k(15, 20), l(10, 13), point3(1, 1);
    std::cout << "Result : " << bsp(j, k, l, point3) << " | answer : 0" << std::endl;
    Point m(1, 0), n(5, 0), o(0, 3), point4(1, 1);
    std::cout << "Result : " << bsp(m, n, o, point4) << " | answer : 1" << std::endl;
    Point r(10, 0), s(15, 20), t(10, 13), point5(12, 8);
    std::cout << "Result : " << bsp(r, s, t, point5) << " | answer : 1" << std::endl;
    return 0;
}