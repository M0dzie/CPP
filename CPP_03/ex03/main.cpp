/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 14:50:40 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap test1;
    DiamondTrap test2("Thomas");

    test1.setDiamondName("Clement");
    std::cout << "Diamand name for test1 : " << test1.getDiamondName() << std::endl;
    test1 = test2;

    std::cout << "ClapTrap name for test2 : " << test2.ClapTrap::getName() << std::endl;
    std::cout << "ScavTrap name for test2 : " << test2.ScavTrap::getName() << std::endl;
    std::cout << "FragTrap name for test2 : " << test2.FragTrap::getName() << std::endl;
    std::cout << "Diamand name for test2 : " << test2.getDiamondName() << std::endl;

    std::cout << "ClapTrap name for test1 : " << test1.ClapTrap::getName() << std::endl;
    std::cout << "ScavTrap name for test1 : " << test1.ScavTrap::getName() << std::endl;
    std::cout << "FragTrap name for test1 : " << test1.FragTrap::getName() << std::endl;
    std::cout << "Diamand name for test1 : " << test1.getDiamondName() << std::endl;

    test1.whoAmI();
    test2.whoAmI();

    test1.attack(test2.getDiamondName());
    return 0;
}