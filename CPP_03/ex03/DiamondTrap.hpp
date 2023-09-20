/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:17:06 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 16:37:16 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &rhs);
    DiamondTrap &operator=(DiamondTrap const &rhs);
    ~DiamondTrap();

private:
    std::string _name;
};