/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 16:10:54 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    {
        std::cout << YELLOW << BOLD << "---- SHRUBBERY FORM ----" << RESET << std::endl;
        ShrubberyCreationForm forest("forest");
        Bureaucrat thomas("Thomas", 5);
        forest.beSigned(thomas);
        thomas.executeForm(forest);
        Bureaucrat mehdi("Mehdi", 145);
        forest.beSigned(mehdi);
        mehdi.executeForm(forest);
        Bureaucrat clement("Clement", 150);
        forest.beSigned(clement);
        clement.executeForm(forest);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- ROBOTOMY FORM ----" << RESET << std::endl;
        RobotomyRequestForm robReq("RobReq");
        Bureaucrat thomas("Thomas", 5);
        robReq.beSigned(thomas);
        thomas.executeForm(robReq);
        Bureaucrat mehdi("Mehdi", 72);
        robReq.beSigned(mehdi);
        mehdi.executeForm(robReq);
        Bureaucrat clement("Clement", 150);
        robReq.beSigned(clement);
        clement.executeForm(robReq);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- PRESIDENTIAL FORM ----" << RESET << std::endl;
        PresidentialPardonForm presPard("PresPard");
        Bureaucrat thomas("Thomas", 5);
        presPard.beSigned(thomas);
        thomas.executeForm(presPard);
        Bureaucrat mehdi("Mehdi", 25);
        presPard.beSigned(mehdi);
        mehdi.executeForm(presPard);
        Bureaucrat clement("Clement", 150);
        presPard.beSigned(clement);
        clement.executeForm(presPard);
    }
    
    return 0;
}
