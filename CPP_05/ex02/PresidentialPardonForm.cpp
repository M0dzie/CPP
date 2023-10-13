/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:53:41 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/13 09:26:07 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(AForm const &target)
{
    try
    {
        if (target.getGradeToSign() > 25)
            throw AForm::GradeTooLowException();
        else if (target.getGradeToExec() > 5)
            throw AForm::GradeTooLowException();
    }
    catch (const AForm::GradeTooLowException &e)
    {
        if (target.getGradeToSign() > 25)
            std::cerr << RED << "Grade to Sign issues with PresidentialPardonForm : ";
        else
            std::cerr << RED << "Grade to Exec issues with PresidentialPardonForm : ";
        std::cerr << e.what() << std::endl;
        return;
    }
    std::cout << target.getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs)
{
    *this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}