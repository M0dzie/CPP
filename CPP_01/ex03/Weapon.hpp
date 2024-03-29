/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:07:14 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/28 11:07:32 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
public:
    Weapon(std::string name);
    ~Weapon();
    void setType(std::string name);
    std::string const &getType() const;

private:
    std::string type;
};

#endif