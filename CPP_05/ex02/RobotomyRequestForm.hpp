/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:50:31 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/12 12:58:08 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &rhs);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    ~RobotomyRequestForm();

private:
};

#endif