/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:48:16 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/12 13:25:59 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(AForm const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    ~ShrubberyCreationForm();

private:
};

#endif