/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:08:19 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 10:58:42 by thmeyer          ###   ########.fr       */
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
    void attack() const;
    void setWeapon(Weapon weapon);

private:
    std::string name;
    Weapon *weaponB;
};

#endif