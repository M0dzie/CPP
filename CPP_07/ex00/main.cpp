/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:45:29 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/25 17:14:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;
    std::cout << YELLOW << BOLD << "---- FIRST TEST ----" << RESET << std::endl;
    std::cout << BLACK << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << GREEN << BOLD << "Swap OK!" << RESET << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << YELLOW << BOLD << "---- SECOND TEST ----" << RESET << std::endl;
    std::cout << BLACK << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << GREEN << BOLD << "Swap OK!" << RESET << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl << std::endl;

    float e = 42.0f;
    float f = 24.24f;
    std::cout << YELLOW << BOLD << "---- THIRD TEST ----" << RESET << std::endl;
    std::cout << BLACK << "e = " << e << ", f = " << f << std::endl;
    ::swap(e, f);
    std::cout << GREEN << BOLD << "Swap OK!" << RESET << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;

    return 0;
}