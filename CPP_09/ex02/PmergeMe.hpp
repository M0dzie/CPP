/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:56:06 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/14 15:10:45 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <sstream>

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

class PmergeMe
{
private:
    PmergeMe();

    int _nElements;

public:
    PmergeMe(int argc, char **argv);
    PmergeMe(PmergeMe const &rhs);
    PmergeMe &operator=(PmergeMe const &rhs);
    ~PmergeMe();

    void fillContainer(char **argv);

    class NotPositiveInteger : public std::exception
    {
    public:
        virtual const char *what() const throw() {return RED BOLD "Error: " RESET "Argument must be a positive integer";}
    };
};

#endif