/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:51:34 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/12 14:52:59 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(AForm const &target)
{
    try
    {
        if (target.getGradeToSign() >= 72)
            throw AForm::GradeTooLowException();
        else if (target.getGradeToExec() >= 45)
            throw AForm::GradeTooLowException();
    }
    catch(const AForm::GradeTooLowException &e)
    {
        if (target.getGradeToSign() >= 72)
            std::cerr << RED << "Grade to Sign issues with RobotomyRequestForm : ";
        else
            std::cerr << RED << "Grade to Exec issues with RobotomyRequestForm : ";
        std::cerr << e.what() << RESET << std::endl;
        return;
    }
    std::cout << "Drilling noises" << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2)
        std::cout << target.getName() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << target.getName() << " ..." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs)
{
    *this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}