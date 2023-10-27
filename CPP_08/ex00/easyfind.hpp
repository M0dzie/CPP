/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:34:37 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/27 11:19:41 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <vector>

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define GRAY "\033[0;37m"
# define RESET "\033[0m" 
# define BOLD "\033[1m"

class NoOccurenceFound : std::exception
{
public:
    virtual const char *what() const throw () {return RED "No Occurence found for this parameter" RESET;}
};

template<typename T>
void easyfind(T first, int second)
{
    for (size_t i = 0; i < first.size(); i++)
        if (first[i] == second)
        {
            std::cout << "First occurence found at " << i << "th place !" << std::endl;
            return;
        }
    throw NoOccurenceFound();
}

#endif