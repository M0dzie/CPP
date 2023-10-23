/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:55:57 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/23 18:59:00 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    std::srand(std::time(NULL));
    int random = rand() % 3;

    if (random == 0)
        return (std::cout << BLACK << "Generation of an instance type A" << RESET << std::endl, \
        new A());
    else if (random == 1)
        return (std::cout << BLACK << "Generation of an instance type B" << RESET << std::endl, \
        new B());
    else
        return (std::cout << BLACK << "Generation of an instance type C" << RESET << std::endl, \
        new C());
}

void identify(Base *p)
{
    if (A *a = dynamic_cast<A*>(p))
        std::cout << GREEN << BOLD << "The type of this instance is A with pointer !" << RESET << std::endl;
    else if (B *b = dynamic_cast<B*>(p))
        std::cout << GREEN << BOLD << "The type of this instance is B with pointer !" << RESET << std::endl;
    else if (C *c = dynamic_cast<C*>(p))
        std::cout << GREEN << BOLD << "The type of this instance is C with pointer !" << RESET << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << GREEN << BOLD << "The type of this instance is A with reference !" << RESET << std::endl;
    }
    catch (...) {}
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << GREEN << BOLD << "The type of this instance is B with reference !" << RESET << std::endl;
    }
    catch (...) {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << GREEN << BOLD << "The type of this instance is C with reference !" << RESET << std::endl;
    }
    catch (...) {}
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << YELLOW << BOLD << "---- TEST " << i << " ----" << RESET << std::endl;
        {
            Base *test = generate();
            identify(test);
            identify(*test);
            delete test;
        }
        if (i != 4)
            sleep(1);
    }
    return 0;
}