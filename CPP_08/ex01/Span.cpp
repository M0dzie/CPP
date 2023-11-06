/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:59 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/06 14:18:26 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	if (n >= UINT_MAX)
	{
		this->_N = UINT_MAX - 1;
		throw Span::NumberIncorrect();
	}
	this->_N = n;
	this->_store.reserve(this->_N);
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_store.reserve(rhs._N);
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (this->_store.size() < this->_N)
		this->_store.push_back(number);
	else
		throw Span::StoreIsFull();
}

int Span::shortestSpan()
{
	if (this->_store.size() < 2)
		throw Span::NotEnoughNumber();
	return 0;
}

int Span::longestSpan()
{
	if (this->_store.size() < 2)
		throw Span::NotEnoughNumber();
	int min = *std::min_element(this->_store.begin(), this->_store.end());
	int max = *std::max_element(this->_store.begin(), this->_store.end());
	return max - min;
}

void Span::fillSpan()
{
	// for_each
}