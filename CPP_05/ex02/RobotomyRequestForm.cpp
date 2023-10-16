/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:51:34 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 11:08:26 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : AForm(rhs)
{
    *this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
    std::cout << "Drilling noises" << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2)
        std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << executor.getName() << " ..." << std::endl;
}
