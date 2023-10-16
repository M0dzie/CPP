/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:50:31 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 11:00:54 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &rhs);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    virtual ~RobotomyRequestForm();

    virtual void execute(Bureaucrat const &executor) const;

private:
    RobotomyRequestForm();
    std::string _target;
};

#endif