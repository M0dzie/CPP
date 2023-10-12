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

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(FALSE), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {}

AForm::AForm(AForm const &rhs) : _name("Unknown"), _signed(FALSE), _gradeToSign(0), _gradeToExec(0)
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
    try
    {
        if (who.getGrade() <= this->_gradeToSign)
        {
            this->_signed = TRUE;
            std::cout << this->_name << " could be signed by " << who.getName() << std::endl;
        }
        else
        {
            this->_signed = FALSE;
            throw AForm::GradeTooLowException();
        }
    }
    catch(const AForm::GradeTooLowException &e)
    {
        std::cerr << RED << this->_name << " couldn't be signed by " << who.getName() << " :" << std::endl;
        std::cerr << RED << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &output, AForm const &rhs)
{
    output << "AForm's name : " << rhs.getName() << std::endl << "Is it signed ? (1 = TRUE, 0 = FALSE) : "
    << rhs.getSigned() << std::endl << "Grade to sign : " << rhs.getGradeToSign() << std::endl
    << "Grade to execute : " << rhs.getGradeToExec() << std::endl;
    
    return output;
}