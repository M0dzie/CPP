/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:46:44 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/25 14:56:41 by thmeyer          ###   ########.fr       */
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
    unsigned int _size;
    T *_arr;

public:
    Array();
    Array(unsigned int n);
    Array(Array const &rhs);
    Array &operator=(Array const &rhs);
    T &operator[](unsigned int index);
    ~Array();

    unsigned int size() const;

    
};

template<typename T>
Array<T>::Array() : _size(0), _arr(NULL) {}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[n]) {}

template<typename T>
Array<T>::Array(Array<T> const &rhs) : _size(rhs._size), _arr(new T[rhs._size])
{
    for (unsigned int i = 0; i < this->_size; i++)
        this->_arr[i] = rhs._arr[i];
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
    if (this != &rhs)
    {
        for (unsigned int i = 0; i < this->_size; i++)
            this->_arr[i] = rhs._arr[i];
        this->_size = rhs._size;
    }
    return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index > this->_size)
        throw std::exception();
    if (index < 0)
        throw std::exception();
    return this->_arr[index];
}

template<typename T>
Array<T>::~Array()
{
    delete [] this->_arr;
}

template<typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

#endif