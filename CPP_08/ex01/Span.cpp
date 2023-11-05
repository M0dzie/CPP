/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:59 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/05 18:49:41 by thmeyer          ###   ########.fr       */
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
	if (static_cast<int>(n) < 0)
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