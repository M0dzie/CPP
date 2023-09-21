/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/21 10:16:51 by thmeyer          ###   ########.fr       */
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
    std::cout << "Diamand name : " << test1.getDiamondName() << std::endl;
    test1 = test2;

    std::cout << "ClapTrap name : " << test2.ClapTrap::getName() << std::endl;
    std::cout << "ScavTrap name : " << test2.ScavTrap::getName() << std::endl;
    std::cout << "FragTrap name : " << test2.FragTrap::getName() << std::endl;
    std::cout << "Diamand name : " << test2.getDiamondName() << std::endl;

    std::cout << "ClapTrap name : " << test1.ClapTrap::getName() << std::endl;
    std::cout << "ScavTrap name : " << test1.ScavTrap::getName() << std::endl;
    std::cout << "FragTrap name : " << test1.FragTrap::getName() << std::endl;
    std::cout << "Diamand name : " << test1.getDiamondName() << std::endl;
    return 0;
}