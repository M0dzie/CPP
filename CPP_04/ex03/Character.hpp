/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:42:51 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/04 10:09:17 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    Character();
    Character(std::string name);
    Character(Character const &rhs);
    Character &operator=(Character const &rhs);
    virtual ~Character();

    void setName(std::string name);
    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);

private:
    int _idxFloor;
    std::string _name;
    AMateria *_inventory[4];
    AMateria *_floor[100];
};

#endif