/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:07:53 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/23 20:29:36 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
public:
    HumanA(std::string firstName, Weapon &weapon);
    ~HumanA();
    void attack();

private:
    std::string name;
    Weapon weaponA;
};

#endif