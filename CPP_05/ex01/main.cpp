/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 17:38:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat good("Thomas", 10);
    Bureaucrat bad("Mehdi", 14);
    Form file1("Taxes", 50, 50);
    Form file2("Salary", 10, 10);

    std::cout << YELLOW << BOLD << "---- DISPLAY BUREAUCRAT ----" << RESET << std::endl;
    std::cout << good << bad << std::endl;
    std::cout << YELLOW << BOLD << "---- DISPLAY FORM ----" << RESET << std::endl;
    std::cout << file1 << std::endl << file2 << std::endl;

    std::cout << YELLOW << BOLD << "---- THOMAS ----" << RESET << std::endl;
    std::cout << YELLOW << BOLD << "---- DISPLAY FORM ----" << RESET << std::endl;
    std::cout << file1 << std::endl << file2 << std::endl;
    good.signForm(file1);
    good.signForm(file2);

    std::cout << std::endl << YELLOW << BOLD << "---- MEHDI ----" << RESET << std::endl;
    std::cout << YELLOW << BOLD << "---- DISPLAY FORM ----" << RESET << std::endl;
    std::cout << file1 << std::endl << file2 << std::endl;
    bad.signForm(file1);
    bad.signForm(file2);
    
    return 0;
}
