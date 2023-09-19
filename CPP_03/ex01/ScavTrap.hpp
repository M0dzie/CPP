/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:59:40 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/19 17:25:31 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap
{
public:
    ScavTrap();
    ScavTrap(ScavTrap const &src);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap const &);

private:
};

#endif