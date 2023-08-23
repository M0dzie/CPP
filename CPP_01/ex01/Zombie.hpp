/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:24:13 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/23 17:07:14 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce( void ) const;
    void setName(std::string name);

private:
    std::string _name;
};

void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif