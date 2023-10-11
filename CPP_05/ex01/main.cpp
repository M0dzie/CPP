/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/11 13:21:12 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat test;
    Bureaucrat meLow("Mehdi--", -1);
    Bureaucrat meHigh("Mehdi++", 160);
    Bureaucrat me("Mehdi", 10);

    std::cout << test << std::endl;

    std::cout << meLow;
    meLow.increaseGrade();
    std::cout << meLow << std::endl;

    std::cout << meHigh;
    meHigh.decreaseGrade();
    std::cout << meHigh << std::endl;

    std::cout << me;
    for (int i = 0; i < 10; i++)
        me.increaseGrade();
    std::cout << me << std::endl;

    std::cout << me;
    me.setGrade(-5);
    std::cout << me;
    me.setGrade(170);
    std::cout << me;
    me.setGrade(75);
    std::cout << me;
    return 0;
}
