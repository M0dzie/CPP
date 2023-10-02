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
	const AAnimal* testCat = new Cat();
	const AAnimal* testDog = new Dog();
	delete testCat;
	delete testDog;

	// Should NOT compile
	// const AAnimal* testAanimal = new AAnimal();
	// delete testAanimal;

	return 0;
}