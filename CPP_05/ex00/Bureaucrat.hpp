/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:19:23 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/10 14:26:28 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(Bureaucrat const &rhs);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    ~Bureaucrat();

private:
    std::string const _name;
    int _grade;
};

std::ostream &operator<<(std::ostream output, Bureaucrat const &rhs);

#endif