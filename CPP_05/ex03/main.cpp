/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 18:54:20 by thmeyer          ###   ########.fr       */
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
        thomas.signForm(forest);
        thomas.executeForm(forest);
        Bureaucrat mehdi("Mehdi", 145);
        mehdi.signForm(forest);
        mehdi.executeForm(forest);
        Bureaucrat clement("Clement", 150);
        clement.signForm(forest);
        clement.executeForm(forest);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- ROBOTOMY FORM ----" << RESET << std::endl;
        RobotomyRequestForm robReq("RobReq");
        Bureaucrat thomas("Thomas", 5);
        thomas.signForm(robReq);
        thomas.executeForm(robReq);
        Bureaucrat mehdi("Mehdi", 72);
        mehdi.signForm(robReq);
        mehdi.executeForm(robReq);
        Bureaucrat clement("Clement", 150);
        clement.signForm(robReq);
        clement.executeForm(robReq);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- PRESIDENTIAL FORM ----" << RESET << std::endl;
        PresidentialPardonForm presPard("PresPard");
        Bureaucrat thomas("Thomas", 5);
        thomas.signForm(presPard);
        thomas.executeForm(presPard);
        Bureaucrat mehdi("Mehdi", 25);
        mehdi.signForm(presPard);
        mehdi.executeForm(presPard);
        Bureaucrat clement("Clement", 150);
        clement.signForm(presPard);
        clement.executeForm(presPard);
    }
    
    return 0;
}
