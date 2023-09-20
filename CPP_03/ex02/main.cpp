/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 15:26:55 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap player1;
    ScavTrap player2("Thomas");
    ClapTrap player3("Mehdi");
    ScavTrap player4(player2);

    std::cout << "Name of player2 : " << player2.getName() << std::endl;
    std::cout << "Name of player4 : " << player4.getName() << std::endl;
    player1.setName("Clement");
    player1.attack(player3.getName());
    player3.takeDamage(player1.getAttackDamage());
    player3.attack(player3.getName());
    player2.attack(player1.getName());
    player1.takeDamage(player2.getAttackDamage());
    player1.beRepaired(6);
    player1.guardGate();
    return 0;
}