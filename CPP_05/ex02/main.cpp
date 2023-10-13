/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/13 11:26:51 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << YELLOW << BOLD << "---- SHRUBBERY FORM ----" << RESET << std::endl;
    Bureaucrat mehdi("Mehdi", 25);
    ShrubberyCreationForm forest("forest");
    forest.beSigned(mehdi);
    forest.execute(mehdi);
    Bureaucrat clement("Clement", 150);
    forest.beSigned(clement);
    forest.execute(clement);
    
    return 0;
}
