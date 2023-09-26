/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:21:10 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 11:48:03 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << PURPLE << "Cat default constructor called" << RESET << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &rhs) : Animal(rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = "Cat";
	*this = rhs;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		std::cout << "Cat copy assignment operator called" << std::endl;
		this->type = rhs.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << PURPLE << BOLD << "Cat destructor called" << RESET << std::endl;
	delete _brain;
}