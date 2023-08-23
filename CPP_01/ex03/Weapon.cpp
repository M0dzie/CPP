/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:07:08 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/23 20:51:00 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    setType(name);
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
    if (this->type.empty())
        return ("fists");
    return this->type;
}

void Weapon::setType(std::string name)
{
    this->type = name;
}