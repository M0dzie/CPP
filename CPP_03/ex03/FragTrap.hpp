/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:41:39 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/20 17:24:02 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &rhs);
    FragTrap &operator=(FragTrap const &rhs);
    ~FragTrap();

    void highFivesGuys(void);
    
private:
};