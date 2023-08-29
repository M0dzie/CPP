/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:31:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 13:37:56 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie *newZombie = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        newZombie[i].setName(name);
        newZombie[i].announce();
    }
    return newZombie;
}