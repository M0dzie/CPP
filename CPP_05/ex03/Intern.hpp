/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:41:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 18:50:04 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTER_HPP
# include "AForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &rhs);
    Intern &operator=(Intern const &rhs);
    ~Intern();

    AForm *makeForm(std::string name, std::string target);

private:
};

#endif