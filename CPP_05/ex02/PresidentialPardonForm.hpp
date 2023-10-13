/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:52:39 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/13 09:20:09 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm
{
public:
    PresidentialPardonForm(AForm const &target);
    PresidentialPardonForm(PresidentialPardonForm const &rhs);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    ~PresidentialPardonForm();

private:
    PresidentialPardonForm();
};

#endif