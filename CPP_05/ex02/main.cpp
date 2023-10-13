/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/13 09:41:38 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    AForm home("Home", 75, 75);
    AForm badHome("BadHome", 145, 138);
    AForm patient("Patient", 25, 45);
    AForm badPatient("BadPatient", 73, 44);
    AForm mehdi("Mehdi", 25, 5);
    AForm clement("Clement", 26, 7);

    std::cout << YELLOW << BOLD << "---- SHRUBBERY FORM ----" << RESET << std::endl;
    ShrubberyCreationForm test(home);
    ShrubberyCreationForm test1(badHome);
    std::cout << std::endl;
    
    std::cout << YELLOW << BOLD << "---- ROBOTOMY FORM ----" << RESET << std::endl;
    RobotomyRequestForm test2(patient);
    RobotomyRequestForm test3(badPatient);
    std::cout << std::endl;
    
    std::cout << YELLOW << BOLD << "---- PRESIDENTIAL FORM ----" << RESET << std::endl;
    PresidentialPardonForm test4(mehdi);
    PresidentialPardonForm test5(clement);
    std::cout << std::endl;

    return 0;
}
