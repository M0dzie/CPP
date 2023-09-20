/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 12:45:11 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap player1;
    ScavTrap player2("Thomas");
    ClapTrap player3("Mehdi");

    std::cout << "Name of player2 : " << player2.getName() << std::endl;
    player1.setName("Clement");
    player1.attack(player3.getName());
    player3.takeDamage(player1.getAttackDamage());
    player3.attack(player1.getName());
    player1.takeDamage(player3.getAttackDamage());
    player1.beRepaired(60);
    player1.guardGate();
    return 0;
}