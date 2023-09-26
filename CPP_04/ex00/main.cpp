	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:17:04 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/22 11:18:16 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	WrongAnimal* test = new WrongCat();
	std::cout << test->getType() << std::endl; 	
	test->makeSound();
	test->setType("Cat");
	std::cout << test->getType() << std::endl;
	test->makeSound();
	test->setType("Random");
	std::cout << test->getType() << std::endl;
	test->makeSound();

	delete meta;
	delete j;
	delete i;
	delete test;
	return 0;
}