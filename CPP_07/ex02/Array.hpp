/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:46:44 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/30 14:03:48 by thmeyer          ###   ########.fr       */
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
    Array() : _size(0), _arr(new T[NULL]) {}
    Array(unsigned int n) : _size(n), _arr(new T[n]) {}
    Array(Array const &rhs) : _size(rhs._size), _arr(new T[rhs._size])
    {   
        for (unsigned int i = 0; i < this->_size; i++)
            this->_arr[i] = rhs._arr[i];
    }
    Array &operator=(Array const &rhs)
    {
        if (this != &rhs)
        {
            for (unsigned int i = 0; i < this->_size; i++)
                this->_arr[i] = rhs._arr[i];
            this->_size = rhs._size;
        }
        return *this;
    }
    ~Array() {delete [] this->_arr;}

    unsigned int size() const {return this->_size;}
    T const &operator[](int index) const
    {
        if (index >= static_cast<int>(this->_size))
            throw Array<T>::IndexIsTooHigh();
        if (index < 0)
            throw Array<T>::IndexIsTooLow();
        return this->_arr[index];
    }
    T const &operator[](unsigned int index) const
    {
        if (index >= this->_size)
            throw Array<T>::IndexIsTooHigh();
        return this->_arr[index];
    }
    T &operator[](int index)
    {
        if (index >= static_cast<int>(this->_size) && this->_size != 0)
            throw Array<T>::IndexIsTooHigh();
        if (index < 0)
            throw Array<T>::IndexIsTooLow();
        return this->_arr[index];
    }
    T &operator[](unsigned int index)
    {
        if (index >= this->_size && this->_size != 0)
            throw Array<T>::IndexIsTooHigh();
        return this->_arr[index];
    }
    
    class IndexIsTooLow : public std::exception
    {
    public:
        virtual const char *what() const throw() {return RED "Index is too low" RESET;}
    };
    class IndexIsTooHigh : public std::exception
    {
    public:
        virtual const char *what() const throw() {return RED "Index is too high" RESET;}
    };
};

#endif