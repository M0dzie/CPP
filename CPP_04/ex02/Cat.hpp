/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:19:16 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/02 10:46:16 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &rhs);
	Cat &operator=(Cat const &rhs);
	virtual ~Cat();
	
	virtual void makeSound() const;

private:
	Brain* _brain;
};

#endif