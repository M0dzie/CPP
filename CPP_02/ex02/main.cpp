/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:46:40 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/18 17:22:22 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    // std::cout << " ---- OWN TESTS ---- " << std::endl;
    // Fixed test1(10);
    // Fixed test2(20);
    // Fixed test3(20.3f);
    // Fixed const test1Const(20);
    // Fixed const test3Const(20.3f);

    // std::cout << "COMPARISON TESTS" << std::endl;
    // std::cout << "Result : " << (test1 < test2) << " answer : 1" << std::endl;
    // std::cout << "Result : " << (test1 <= test2) << " answer : 1" << std::endl;
    // std::cout << "Result : " << (test1 > test2) << " answer : 0" << std::endl;
    // std::cout << "Result : " << (test1 >= test2) << " answer : 0" << std::endl;
    // std::cout << "Result : " << (test2 == test3) << " answer : 0" << std::endl;
    // std::cout << "Result : " << (test2 != test3) << " answer : 1" << std::endl;

    // std::cout << "ARITHMETIC TESTS" << std::endl;
    // std::cout << "Result : " << (test1 + test3) << " answer : 30.3" << std::endl;
    // std::cout << "Result : " << (test1 - test2) << " answer : -10" << std::endl;
    // std::cout << "Result : " << (test1 * test2) << " answer : 200" << std::endl;
    // std::cout << "Result : " << (test1 / test2) << " answer : 0.5" << std::endl;

    // std::cout << "MIN AND MAX TESTS" << std::endl;
    // std::cout << "Result : " << Fixed::min(test1, test3) << " answer : 10" << std::endl;\
    // std::cout << "Result : " << Fixed::max(test1, test3) << " answer : 20.3" << std::endl;\
    // std::cout << "Result : " << Fixed::min(test1Const, test3Const) << " answer : 10" << std::endl;\
    // std::cout << "Result : " << Fixed::max(test1Const, test3Const) << " answer : 20.3" << std::endl;\
    
    
    // std::cout << " ---- MANDATORY TESTS ---- " << std::endl;
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}