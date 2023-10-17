/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/17 15:22:59 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern slave;
    AForm *scf;
    AForm *rrf;
    AForm *ppf;

    try
    {
    
        scf = slave.makeForm("shrubbery creation", "Forest");
        rrf = slave.makeForm("robotomy request", "Bender");
        ppf = slave.makeForm("presidential pardon", "PresPard");
        // AForm *wrong;
        // wrong = slave.makeForm("Shrubbery creation", "Dedge");
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        delete scf;
        delete rrf;
        delete ppf;
        return 1;
    }

    {
        std::cout << std::endl << YELLOW << BOLD << "---- SHRUBBERY FORM ----" << RESET << std::endl;
        Bureaucrat thomas("Thomas", 5);
        thomas.signForm(*scf);
        thomas.executeForm(*scf);
        Bureaucrat mehdi("Mehdi", 145);
        mehdi.signForm(*scf);
        mehdi.executeForm(*scf);
        Bureaucrat clement("Clement", 150);
        clement.signForm(*scf);
        clement.executeForm(*scf);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- ROBOTOMY FORM ----" << RESET << std::endl;
        Bureaucrat thomas("Thomas", 5);
        thomas.signForm(*rrf);
        thomas.executeForm(*rrf);
        Bureaucrat mehdi("Mehdi", 72);
        mehdi.signForm(*rrf);
        mehdi.executeForm(*rrf);
        Bureaucrat clement("Clement", 150);
        clement.signForm(*rrf);
        clement.executeForm(*rrf);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- PRESIDENTIAL FORM ----" << RESET << std::endl;
        Bureaucrat thomas("Thomas", 5);
        thomas.signForm(*ppf);
        thomas.executeForm(*ppf);
        Bureaucrat mehdi("Mehdi", 25);
        mehdi.signForm(*ppf);
        mehdi.executeForm(*ppf);
        Bureaucrat clement("Clement", 150);
        clement.signForm(*ppf);
        clement.executeForm(*ppf);
    }

    delete scf;
    delete rrf;
    delete ppf;
    return 0;
}
