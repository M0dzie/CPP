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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal *array[10];
	for (int i = 0; i < 5; i++)
		array[i] = new Dog();
	for(int i = 5; i < 10; i++)
		array[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete array[i];
	return 0;
}