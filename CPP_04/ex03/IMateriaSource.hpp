/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:22:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 15:32:21 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource
{
public:
    IMateriaSource();
    IMateriaSource(IMateriaSource const &rhs);
    IMateriaSource &operator=(IMateriaSource const &rhs);
    virtual ~IMateriaSource();

    virtual void learnMateria(AMateria *rhs) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;

private:
    AMateria *_memory[4];
};

#endif