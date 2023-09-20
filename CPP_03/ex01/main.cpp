/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 12:16:52 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap player1;
    ClapTrap player2("Mehdi");

    player1.setName("Clement");
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDamage());
    player2.attack(player1.getName());
    player1.takeDamage(player2.getAttackDamage());
    player1.beRepaired(60);
    player1.guardGate();
    return 0;
}