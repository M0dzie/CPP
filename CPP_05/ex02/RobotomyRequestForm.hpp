/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:50:31 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/12 14:54:29 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(AForm const &target);
    RobotomyRequestForm(RobotomyRequestForm const &rhs);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    ~RobotomyRequestForm();

private:
};

#endif