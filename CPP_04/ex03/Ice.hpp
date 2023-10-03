/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:48:07 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 17:34:05 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const &rhs);
    Ice &operator=(Ice const &rhs);
    virtual ~Ice();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);

private:
};

#endif