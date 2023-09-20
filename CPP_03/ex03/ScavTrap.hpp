/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:59:40 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 17:23:58 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &rhs);
    ScavTrap &operator=(ScavTrap const &rhs);
    ~ScavTrap();
    
    void attack(std::string const &target);
    void guardGate();

private:
};

#endif