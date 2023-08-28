/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:07:43 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 13:14:26 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string firstName, Weapon &weapon) : name(firstName), weaponA(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << this->weaponA.getType() << std::endl;
}