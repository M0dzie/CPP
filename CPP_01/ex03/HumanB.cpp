/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:08:10 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 12:23:12 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string firstName) : name(firstName)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack() const
{
    std::cout << this->name << " attacks with their " << this->weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;
}