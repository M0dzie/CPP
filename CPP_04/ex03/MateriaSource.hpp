/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:22:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 17:34:01 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(MateriaSource const &rhs);
    MateriaSource &operator=(MateriaSource const &rhs);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria *rhs);
    virtual AMateria *createMateria(std::string const &type);

private:
    AMateria *_memory[4];
};

#endif