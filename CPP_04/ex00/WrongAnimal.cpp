/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:49:32 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 14:33:26 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Untyped")
{
    std::cout << YELLOW << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs) : type("Untyped")
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = rhs;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    if (this != &rhs)
    {
        std::cout << "WrongAnimal copy assignment operator called" << std::endl;
        this->type = rhs.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << YELLOW << BOLD << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::setType(std::string wrongAnimal)
{
    this->type = wrongAnimal;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal default sound" << std::endl;
}