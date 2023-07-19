/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:39:06 by thmeyer           #+#    #+#             */
/*   Updated: 2023/07/19 23:22:37 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Constructor called" << std::endl;
	
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void PhoneBook::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}