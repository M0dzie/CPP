/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:07:08 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/25 09:45:26 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name)
{
    setType(name);
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string name)
{
    this->type = name;
}