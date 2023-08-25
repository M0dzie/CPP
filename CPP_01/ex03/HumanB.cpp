/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:08:10 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/25 11:07:48 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string firstName) : name(firstName)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weaponB.getType() << std::endl;
}

void HumanB::setWeapon(Weapon const &weapon)
{
    this->weaponB.setType(weapon.getType());
}