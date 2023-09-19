/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 16:56:07 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap player1("Mehdi");
    ClapTrap player2("Clement");
    ClapTrap player3;
    ClapTrap test(player1);

    player3 = player2;
    player1.setAttackDamage(4);
    player2.setAttackDamage(2);

    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDamage());
    player2.attack(player1.getName());
    player1.takeDamage(player2.getAttackDamage());

    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDamage());
    player2.attack(player1.getName());
    player1.takeDamage(player2.getAttackDamage());
    
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDamage());
    player2.attack(player1.getName());
    player1.takeDamage(player2.getAttackDamage());
    
    player2.beRepaired(6);
    return 0;
}