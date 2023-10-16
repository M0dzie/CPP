/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:52:39 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 11:25:42 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &rhs);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    virtual ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const &executor) const;

private:
    PresidentialPardonForm();
    std::string _target;
};

#endif