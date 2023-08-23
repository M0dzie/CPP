/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:31:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/23 17:05:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *newZombie = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        newZombie[i].setName(name);
        newZombie[i].announce();
    }
    delete [] newZombie;
}