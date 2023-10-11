/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:26:59 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/11 11:20:14 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(0) {}

Bureaucrat::Bureaucrat(int grade) : _name("Unknown")
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
    }
    catch(const Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    this->_grade = grade;
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

void Bureaucrat::increaseGrade()
{
    if (this->_grade < 2)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decreaseGrade()
{
    if (this->_grade > 149)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &rhs)
{
    output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return output;
}