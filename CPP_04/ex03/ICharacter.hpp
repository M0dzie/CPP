/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:42:51 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 12:44:48 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"

class ICharacter
{
public:
    ICharacter();
    ICharacter(std::string name);
    ICharacter(ICharacter const &rhs);
    ICharacter &operator=(ICharacter const &rhs);
    virtual ~ICharacter();

    void setName(std::string name);
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;

private:
    std::string _name;
    AMateria *_inventory[4];
    int _idx;
};

#endif