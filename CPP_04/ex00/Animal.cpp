/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:27:39 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/25 13:51:32 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << BLACK << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(Animal const &rhs) : type("Animal")
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Animal copy assignment operator called" << std::endl;
		this->type = rhs.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << BLACK << BOLD << "Animal destructor called" << RESET << std::endl;
}

void Animal::setType(std::string animal)
{
	this->type = animal;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	if (this->type == "Dog")
		std::cout << "bark bark bark!" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Meooowwwww!" << std::endl;
}