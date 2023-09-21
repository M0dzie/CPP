/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/21 13:19:06 by thmeyer          ###   ########.fr       */
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

    std::cout << "Abilities of " << test1.getDiamondName() << " : " << std::endl;
    std::cout << "Hit Points : " << test1.DiamondTrap::getHitPoints() << " and FragTrap Hit Points : "
    << test1.FragTrap::getHitPoints() << std::endl;
    std::cout << "Energy Points : " << test1.DiamondTrap::getEnergyPoints() << " and ScavTrap Energy Points : "
    << test1.ScavTrap::getEnergyPoints() << std::endl;
    std::cout << "Attack Damage : " << test1.DiamondTrap::getAttackDamage() << " and FragTrap Attack Damage : "
    << test1.FragTrap::getAttackDamage() << std::endl;

    test1.diamondAttack(test2.getDiamondName());
    test2.takeDamage(test1.getAttackDamage());

    return 0;
}