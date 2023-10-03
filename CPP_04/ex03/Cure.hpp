/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:43:10 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 15:08:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure const &rhs);
    Cure &operator=(Cure const &rhs);
    virtual ~Cure();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);

private:
};

#endif