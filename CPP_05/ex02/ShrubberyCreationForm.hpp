/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:48:16 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/13 11:19:03 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    virtual ~ShrubberyCreationForm();

    virtual void execute(Bureaucrat const &executor) const;

private:
    ShrubberyCreationForm();
    std::string _target;
};

#endif