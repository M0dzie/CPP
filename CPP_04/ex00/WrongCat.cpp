/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:22:49 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 13:31:27 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << RED << "WrongCat constructor called" << RESET << std::endl;
    this->type = "Dog";
}

WrongCat::WrongCat(WrongCat const &rhs) : WrongAnimal(rhs)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = "Dog";
    *this = rhs;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
    {
        WrongAnimal::operator=(rhs);
        std::cout << "WrongCat copy assignment operator called" << std::endl;
        this->type = rhs.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << RED << BOLD << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "bark bark bark!" << std::endl;
}