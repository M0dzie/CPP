/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:08:19 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/25 10:53:11 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string firstName);
    ~HumanB();
    void attack();
    void setWeapon(Weapon const &weapon);

private:
    std::string name;
    Weapon weaponB;
};

#endif