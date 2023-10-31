/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:30 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/31 13:50:39 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <limits>

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

# define UINT_MAX 4294967295

class Span
{
private:
	unsigned int _N;
	std::vector<int> _store;

public:
	Span() : _N(0) {}
	Span(unsigned int n);
	Span(Span const &rhs) : _N(rhs._N) {}
	Span &operator=(Span const &rhs);
	~Span() {}

	void addNumber(int number);
	// void shortestSpan();
	// void longestSpan();

	class NumberIncorrect : public std::exception
	{
	public:
		virtual const char *what() const throw () {return RED "n is out of bounds, it should be a positive unsigned int value" RESET;}	
	};
	class StoreIsFull : public std::exception
	{
	public:
		virtual const char *what() const throw () {return RED "The Store is already full" RESET;}	
	};
};

#endif