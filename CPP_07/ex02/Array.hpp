/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:46:44 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/25 13:57:14 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <ctime>
# include <cstdlib>

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

# define MAX_VAL 750

template<typename T>
class Array
{
private:
    T *_arr;

public:
    Array();
    Array(unsigned int n);
    Array(Array const &rhs);
    Array &operator=(Array const &rhs);
    T &operator[](unsigned int index);
    ~Array();
};

template<typename T>
Array<T>::Array() : _arr(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]) {}

template<typename T>
Array<T>::Array(Array<T> const &rhs)
{
    *this = rhs;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
    int sizeOfArr = sizeof(this->_arr);
    int arrSize = sizeOfArr / sizeof(T);

    if (this != &rhs)
    {
        for (int i = 0; i < arrSize; i++)
        {
            delete [] this->_arr;
            if (rhs._arr[i])
                this->_arr[i] = rhs._arr[i];
            else
                this->_arr[i] = 0;
        }
    }
    return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
    int sizeOfArr = sizeof(this->_arr);
    unsigned int arrSize = sizeOfArr / sizeof(T);
    
    if (index > arrSize)
        throw std::exception();
    return this->_arr[index];
}

template<typename T>
Array<T>::~Array()
{
    delete [] this->_arr;
}

#endif