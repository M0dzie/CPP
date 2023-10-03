/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:08:41 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/03 11:39:48 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_brain = new Brain();
	std::cout << GREEN << "Dog default constructor called" << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &rhs) : Animal(rhs)
{
	this->_brain = new Brain();
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
		for (int i = 0; i < 100; i++)
            this->_brain->setIdeas(rhs._brain->getIdeas(i), i);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << GREEN << BOLD << "Dog destructor called" << RESET << std::endl;
	delete this->_brain;
}

void Dog::setBrainIdeas(std::string idea, int index)
{
	this->_brain->setIdeas(idea, index);
}

std::string Dog::getBrainIdeas(int index) const
{
	return this->_brain->getIdeas(index);
}

void Dog::makeSound() const
{
	std::cout << "bark bark bark!" << std::endl;
}