/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:20:16 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/07 14:48:41 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <stack>
# include <list>
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
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {};
    MutantStack(MutantStack const &rhs) : std::stack<T>(rhs) {}
    MutantStack &operator=(MutantStack const &rhs) {std::stack<T>::operator=(rhs); return *this;}
    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {return this->c.begin();}
    iterator end() {return this->c.end();}

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator cbegin() const {return this->c.begin();} 
    const_iterator cend() const {return this->c.end();}

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin() {return this->c.rbegin();}
    reverse_iterator rend() {return this->c.rend();}

    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    const_reverse_iterator crbegin() const {return this->c.rbegin();}
    const_reverse_iterator crend() const {return this->c.rend();}
};

#endif