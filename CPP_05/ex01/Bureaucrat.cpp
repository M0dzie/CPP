/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:26:59 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 17:34:54 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(75) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
        std::cerr << RED << BOLD << "Grade is out of range, it'll be set automatically to 150" << RESET << std::endl;
        this->_grade = 150;
    }
    catch(const Bureaucrat::GradeTooHighException &e)
    {
        this->_grade = 1;
        std::cerr << e.what() << std::endl;
        std::cerr << RED << BOLD << "Grade is out of range, it'll be set automatically to 1" << RESET << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
    *this = rhs;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
        this->_grade = rhs._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const 
{
    return this->_grade;
}

void Bureaucrat::setGrade(int grade)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    catch(const Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    this->_grade = grade;
}

void Bureaucrat::increaseGrade()
{
    try
    {
        if (this->_grade < 2)
            throw Bureaucrat::GradeTooHighException();
    }
    catch(const Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    this->_grade--;
}

void Bureaucrat::decreaseGrade()
{
    try
    {
        if (this->_grade > 149)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    this->_grade++;
}

void Bureaucrat::signForm(Form &file)
{
    try
    {
        file.beSigned(*this);
        std::cout << this->_name << " signed " << file.getName() << std::endl;
    }
    catch(const Form::GradeTooLowException &e)
    {
        std::cerr << RED << file.getName() << " couldn't be signed by " << this->_name << " :" << std::endl;
        std::cerr << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &rhs)
{
    output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return output;
}
