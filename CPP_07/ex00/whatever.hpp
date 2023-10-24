/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:44:24 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/24 15:51:02 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

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

template<typename T>
void swap(T &arg1, T &arg2)
{
    T tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}

template<typename T>
T &max(T &arg1, T &arg2)
{
    return arg1 > arg2 ? arg1 : arg2;
}

template<typename T>
T &min(T &arg1, T &arg2)
{
    return arg1 < arg2 ? arg1 : arg2;
}

#endif