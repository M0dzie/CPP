/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:59:40 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 10:41:34 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(ScavTrap const &src);
    ScavTrap &operator=(ScavTrap const &);
    ~ScavTrap();
    
    void attack(std::string const &target);
    void guardGate();

private:
};

#endif