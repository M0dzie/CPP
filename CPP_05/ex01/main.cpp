/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:17:26 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/17 13:19:27 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat good("Thomas", 10);
    Bureaucrat bad("Mehdi", 14);
    Form file1("Taxes", 50, 50);
    Form file2("Salary", 10, 10);
    Form file3("Other Taxes", 50, 50);
    Form file4("Other Salary", 10, 10);
    Form badfile("test", 151, 0);

    std::cout << YELLOW << BOLD << "---- DISPLAY BUREAUCRAT ----" << RESET << std::endl;
    std::cout << good << bad << std::endl;

    std::cout << YELLOW << BOLD << "---- THOMAS ----" << RESET << std::endl;
    std::cout << YELLOW << BOLD << "---- DISPLAY FORM ----" << RESET << std::endl;
    std::cout << file1 << std::endl << file2 << std::endl;
    good.signForm(file1);
    good.signForm(file2);
    std::cout << std::endl << file1 << std::endl << file2 << std::endl;

    std::cout << std::endl << YELLOW << BOLD << "---- MEHDI ----" << RESET << std::endl;
    std::cout << YELLOW << BOLD << "---- DISPLAY FORM ----" << RESET << std::endl;
    std::cout << file3 << std::endl << file4 << std::endl;
    bad.signForm(file3);
    bad.signForm(file4);
    std::cout << std::endl << file3 << std::endl << file4 << std::endl;
    
    return 0;
}
