/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:01:10 by thmeyer           #+#    #+#             */
/*   Updated: 2023/09/26 11:43:04 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

class Brain
{
public:
    Brain();
    Brain(Brain const &rhs);
    Brain &operator=(Brain const &rhs);
    ~Brain();

private:
    std::string ideas[100];
};

#endif