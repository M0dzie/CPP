/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:22:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 18:41:56 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

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