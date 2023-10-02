/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:27:39 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/02 12:47:53 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Untyped")
{
	std::cout << BLACK << "AAnimal default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs) : type("Untyped")
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
	{
		std::cout << "AAnimal copy assignment operator called" << std::endl;
		this->type = rhs.type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << BLACK << BOLD << "AAnimal destructor called" << RESET << std::endl;
}

void AAnimal::setType(std::string animal)
{
	this->type = animal;
}

std::string AAnimal::getType() const
{
	return this->type;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal default sound" << std::endl;
}