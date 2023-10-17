/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:42:58 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/17 15:21:58 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &rhs)
{
    *this = rhs;
}

Intern &Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    return *this;
}

Intern::~Intern() {}

AForm *Intern::createShrubberyForm(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyForm(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialForm(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string checkInput[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *(Intern::*displayFunc[3])(std::string const &) = {
        &Intern::createShrubberyForm,
        &Intern::createRobotomyForm,
        &Intern::createPresidentialForm};
    
    for (int i = 0; i < 3; i++)
    {
        if (checkInput[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*displayFunc[i])(target);
        }
    }
    throw FormDontExist();
}