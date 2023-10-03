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

#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	const AAnimal *copy = i;
	std::cout << "Copy type : " << copy->getType() << std::endl;
	copy->makeSound();
	copy = j;
	std::cout << "Copy type : " << copy->getType() << std::endl;
	copy->makeSound();

	delete j;//should not create a leak
	delete i;

	AAnimal *array[10];
	for (int i = 0; i < 5; i++)
		array[i] = new Dog();
	for(int i = 5; i < 10; i++)
		array[i] = new Cat();
	copy = array[2];
	std::cout << "Copy type : " << copy->getType() << std::endl;
	copy->makeSound();
	copy = array[9];
	std::cout << "Copy type : " << copy->getType() << std::endl;
	copy->makeSound();
	for (int i = 0; i < 10; i++)
		delete array[i];
	
	Cat cat;
	cat.setBrainIdeas("Cat's ideas", 0);
	cat.setBrainIdeas("Cat's first idea", 1);
	cat.setBrainIdeas("Cat's last idea", 99);
	Cat catCopy = cat;
	std::cout << GRAY << BOLD << "CatCopy's brain" << RESET << std::endl;
	std::cout << catCopy.getBrainIdeas(0) << std::endl;
	std::cout << catCopy.getBrainIdeas(1) << std::endl;
	std::cout << catCopy.getBrainIdeas(99) << std::endl;

	catCopy.setBrainIdeas("CatCopy's ideas", 0);
	catCopy.setBrainIdeas("CatCopy's first ideas", 1);
	catCopy.setBrainIdeas("CatCopy's last ideas", 99);
	std::cout << GRAY << BOLD << "Cat's brain" << RESET << std::endl;
	std::cout << cat.getBrainIdeas(0) << std::endl;
	std::cout << cat.getBrainIdeas(1) << std::endl;
	std::cout << cat.getBrainIdeas(99) << std::endl;
	std::cout << GRAY << BOLD << "CatCopy's brain" << RESET << std::endl;
	std::cout << catCopy.getBrainIdeas(0) << std::endl;
	std::cout << catCopy.getBrainIdeas(1) << std::endl;
	std::cout << catCopy.getBrainIdeas(99) << std::endl;

	// Should NOT compile
	// const AAnimal* testAanimal = new AAnimal();
	// delete testAanimal;

	return 0;
}