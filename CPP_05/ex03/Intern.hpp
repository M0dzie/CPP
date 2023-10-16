/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:41:50 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/16 18:42:57 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTER_HPP

class Intern
{
public:
    Intern();
    Intern(Intern const &rhs);
    Intern &operator=(Intern const &rhs);
    ~Intern();

private:
};

#endif