/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:06:32 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/10 14:01:38 by thmeyer          ###   ########.fr       */
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
    {
        std::cout << BLUE << BOLD << " ---- MANDATORY TESTS ---- " << RESET << std::endl;
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        std::cout << std::endl;
    
        ICharacter *me = new Character("me");
        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        std::cout << std::endl;
    
        ICharacter *bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob;
        delete me;
        delete src;
    }

    std::cout << std::endl << GREEN << BOLD << " ---- ADDITIONAL TESTS ---- " << RESET << std::endl;
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());

    std::cout << std::endl;

    Character* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("fuyfyufyiu");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << std::endl;

    ICharacter* bob = new Character("bob");
    me->unequip(0);
    me->unequip(0);
    me->unequip(5);
    for (int i = -1; i < 4; i++)
        me->use(i, *bob);
    tmp = src->createMateria("cure");
    for (int i = 0; i < 5; i++)
        me->equip(tmp);
    me->use(0, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}