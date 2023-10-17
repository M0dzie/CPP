/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:46:55 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/17 13:13:19 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unknown"), _signed(FALSE), _gradeToSign(0), _gradeToExec(0) {}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(FALSE), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    try
    {
        if (gradeToSign < 1)
            throw Form::GradeTooHighException();
        if (gradeToExec < 1)
            throw Form::GradeTooHighException();
        if (gradeToSign > 150)
            throw Form::GradeTooLowException();
        if (gradeToExec > 150)
            throw Form::GradeTooLowException();
    }
    catch(const Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Form::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Form::Form(Form const &rhs) : _name(rhs._name), _signed(FALSE), _gradeToSign(rhs._gradeToSign), _gradeToExec(rhs._gradeToExec)
{
    *this = rhs;
}

Form &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return *this;
}

Form::~Form() {}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getGradeToSign() const
{
    return this->_gradeToSign;
}

int Form::getGradeToExec() const
{
    return this->_gradeToExec;
}

void Form::beSigned(Bureaucrat &who)
{
    if (who.getGrade() <= this->_gradeToSign)
        this->_signed = TRUE;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, Form const &rhs)
{
    output << "Form's name : " << rhs.getName() << std::endl << "Is it signed ? (1 = TRUE, 0 = FALSE) : "
    << rhs.getSigned() << std::endl << "Grade to sign : " << rhs.getGradeToSign() << std::endl
    << "Grade to execute : " << rhs.getGradeToExec() << std::endl;
    
    return output;
}