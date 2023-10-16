/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 11:12:44 by thmeyer          ###   ########.fr       */
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
        Bureaucrat mehdi("Mehdi", 25);
        ShrubberyCreationForm forest("forest");
        forest.beSigned(mehdi);
        forest.execute(mehdi);
        Bureaucrat clement("Clement", 150);
        forest.beSigned(clement);
        forest.execute(clement);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- ROBOTOMY FORM ----" << RESET << std::endl;
        Bureaucrat mehdi("Mehdi", 25);
        RobotomyRequestForm medical("Medical");
        medical.beSigned(mehdi);
        medical.execute(mehdi);
        Bureaucrat clement("Clement", 72);
        medical.beSigned(clement);
        medical.execute(clement);
    }
    {
        std::cout << std::endl << YELLOW << BOLD << "---- PRESIDENTIAL FORM ----" << RESET << std::endl;
    }
    
    return 0;
}
