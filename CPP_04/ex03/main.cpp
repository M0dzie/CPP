/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:06:32 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/09 14:23:16 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main(void)
{
    std::cout << " ---- MANDATORY TESTS ---- " << std::endl;
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    std::cout << std::endl << " ---- ADDITIONAL TESTS ---- " << std::endl;
    ICharacter *thomas = new Character("Thomas");
    IMateriaSource *materia = new MateriaSource();

    for (int i = 0; i < 2; i++)
    {
        materia->learnMateria(new Ice());
        materia->learnMateria(new Cure());
    }
    Ice test;
    materia->learnMateria(&test);

    for (int i = 0; i < 3; i++)
    {
        thomas->equip(materia->createMateria("ice"));
        thomas->equip(materia->createMateria("cure"));
        thomas->equip(materia->createMateria("unknown"));
    }

    for (int i = -1; i < 4; i++)
        thomas->use(i, *thomas);

    delete thomas;
    delete materia;
    return 0;
}