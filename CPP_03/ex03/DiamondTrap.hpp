/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:17:06 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/21 14:07:12 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
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
    
    std::string getDiamondName() const;
    void setDiamondName(std::string name);
    
    void diamondAttack(std::string const &target);
    void whoAmI();

private:
    std::string _name;
};