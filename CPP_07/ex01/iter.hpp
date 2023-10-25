/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:22:54 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/25 19:25:44 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

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
void displayArr(T arr)
{
    std::cout << BLACK << "Templace function called : " << RESET << arr << std::endl;
}

template<typename T>
void iter(T *arr, int arrSize, void (*f)(T&))
{
    for (int i = 0; i < arrSize; i++)
        f(arr[i]);
}

template<typename T>
void iter(T const *arr, int arrSize, void (*f)(T const &))
{
    for (int i = 0; i < arrSize; i++)
        f(arr[i]);
}

#endif