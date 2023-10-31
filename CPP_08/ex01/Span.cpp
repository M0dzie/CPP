/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:59 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/31 13:52:24 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	if (n >= UINT_MAX)
	{
		this->_N = 0;
		throw Span::NumberIncorrect();
	}
	this->_N = n;
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
	}
	return *this;
}

void Span::addNumber(int number)
{
	(void) number;
	unsigned int index = 0;
	for (std::vector<int>::iterator it = this->_store.begin(); it < this->_store.end(); *it++)
	{
		if (index == this->_N)
		{
			throw Span::StoreIsFull();
		}
		index++;
	}
}