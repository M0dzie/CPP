/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:06:38 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 13:29:30 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &rhs);
	Dog &operator=(Dog const &rhs);
	virtual ~Dog();

	virtual void makeSound() const;

private:
};

#endif