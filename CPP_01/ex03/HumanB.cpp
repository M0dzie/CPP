/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:08:10 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/29 13:41:43 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string firstName) : name(firstName), weaponB(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() const
{
    if (!this->weaponB)
        std::cout << this->name << " attack with their fists" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;
}