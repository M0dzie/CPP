/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:30 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/06 18:26:51 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <ctime>

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

class Span
{
private:
	unsigned int _N;
	std::vector<unsigned int> _store;

public:
	Span() : _N(0) {}
	Span(unsigned int n);
	Span(Span const &rhs) : _N(rhs._N) {this->_store.reserve(rhs._N);}
	Span &operator=(Span const &rhs);
	~Span() {}

	unsigned int getN() const {return this->_N;}
	unsigned int getCapacity() const {return this->_store.capacity();}

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
	void showStore() const;
	void fillRandom();
	void fillSpan(std::vector<unsigned int>::iterator start, std::vector<unsigned int>::iterator end);

	class NumberIncorrect : public std::exception
	{
	public:
		virtual const char *what() const throw () {return RED "n is out of bounds, it should be a positive unsigned int value" RESET;}	
	};
	class StoreIsFull : public std::exception
	{
	public:
		virtual const char *what() const throw () {return RED "The Store can't accept any more elements" RESET;}	
	};
	class NotEnoughNumber : public std::exception
	{
	public:
		virtual const char *what() const throw () {return RED "The number of elements stored is not enough" RESET;}	
	};
};

#endif