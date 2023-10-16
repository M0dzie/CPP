/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:53:41 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 11:31:40 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : AForm(rhs)
{
    *this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (this->getSigned() == FALSE)
            throw AForm::FormIsNotSigned();
        if (executor.getGrade() > this->getGradeToExec())
            throw AForm::FormIsNotExec();
    }
    catch (const AForm::FormIsNotSigned &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    catch (const AForm::FormIsNotExec &e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    std::cout << executor.getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}