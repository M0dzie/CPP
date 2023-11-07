/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:20:16 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/07 10:28:20 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <stack>
# include <list>
# include <vector>
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
class MutantStack
{
private:
    std::stack<T> _mStack;

public:
    MutantStack() {};
    MutantStack(MutantStack const &rhs) : _mStack(rhs._mStack) {}
    MutantStack &operator=(MutantStack const &rhs) {if (this != &rhs) {this->_mStack = rhs._mStack;} return *this;}
    ~MutantStack() {}

    bool empty() {return this->_mStack.empty();}
};

#endif