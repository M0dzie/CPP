/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:06:38 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/02 12:56:48 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(Dog const &rhs);
	Dog &operator=(Dog const &rhs);
	virtual ~Dog();
	
	virtual void makeSound() const;

private:
	Brain* _brain;
};

#endif