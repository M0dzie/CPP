/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:24:32 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/23 17:09:05 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    announce();
}

Zombie::~Zombie()
{
    std::cout << this->_name << " found death, sadly." << std::endl;
}

void Zombie::announce( void ) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}