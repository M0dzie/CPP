/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:41:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/17 11:25:23 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &rhs);
    Intern &operator=(Intern const &rhs);
    ~Intern();

    AForm *makeForm(std::string const &name, std::string const &target);
    AForm *createShrubberyForm(std::string const &target);
    AForm *createRobotomyForm(std::string const &target);
    AForm *createPresidentialForm(std::string const &target);

private:
};

#endif