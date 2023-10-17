/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:46:55 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/11 15:40:50 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Unknown"), _signed(FALSE), _gradeToSign(0), _gradeToExec(0) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(FALSE), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    try
    {
        if (gradeToSign < 1)
            throw AForm::GradeTooHighException();
        if (gradeToExec < 1)
            throw AForm::GradeTooHighException();
        if (gradeToSign > 150)
            throw AForm::GradeTooLowException();
        if (gradeToExec > 150)
            throw AForm::GradeTooLowException();
    }
    catch(const AForm::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const AForm::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

AForm::AForm(AForm const &rhs) : _name(rhs._name), _signed(FALSE), _gradeToSign(rhs._gradeToSign), _gradeToExec(rhs._gradeToExec)
{
    *this = rhs;
}

AForm &AForm::operator=(AForm const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getSigned() const
{
    return this->_signed;
}

int AForm::getGradeToSign() const
{
    return this->_gradeToSign;
}

int AForm::getGradeToExec() const
{
    return this->_gradeToExec;
}

void AForm::beSigned(Bureaucrat &who)
{
    if (who.getGrade() <= this->_gradeToSign)
        this->_signed = TRUE;
    else
        throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, AForm const &rhs)
{
    output << "AForm's name : " << rhs.getName() << std::endl << "Is it signed ? (1 = TRUE, 0 = FALSE) : "
    << rhs.getSigned() << std::endl << "Grade to sign : " << rhs.getGradeToSign() << std::endl
    << "Grade to execute : " << rhs.getGradeToExec() << std::endl;
    
    return output;
}