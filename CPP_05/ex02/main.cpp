/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 11:32:29 by thmeyer          ###   ########.fr       */
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
        Bureaucrat mehdi("Mehdi", 25);
        forest.beSigned(mehdi);
        forest.execute(mehdi);
        Bureaucrat clement("Clement", 150);
        forest.beSigned(clement);
        forest.execute(clement);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- ROBOTOMY FORM ----" << RESET << std::endl;
        RobotomyRequestForm robReq("RobReq");
        Bureaucrat mehdi("Mehdi", 25);
        robReq.beSigned(mehdi);
        robReq.execute(mehdi);
        Bureaucrat clement("Clement", 72);
        robReq.beSigned(clement);
        robReq.execute(clement);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- PRESIDENTIAL FORM ----" << RESET << std::endl;
        PresidentialPardonForm presPard("PresPard");
        Bureaucrat thomas("Thomas", 5);
        presPard.beSigned(thomas);
        presPard.execute(thomas);
        Bureaucrat mehdi("Mehdi", 25);
        presPard.beSigned(mehdi);
        presPard.execute(mehdi);
        Bureaucrat clement("Clement", 75);
        presPard.beSigned(clement);
        presPard.execute(clement);
    }
    
    return 0;
}
