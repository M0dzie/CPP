/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:08:41 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/25 12:56:20 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << GREEN << "Dog default constructor called" << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &rhs) : Animal(rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = "Dog";
	*this = rhs;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		std::cout << "Dog copy assignement operator called" << std::endl;
		this->type = rhs.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << GREEN << BOLD << "Dog destructor called" << RESET << std::endl;
}