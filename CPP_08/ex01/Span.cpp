/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:26:59 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/07 15:12:54 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _N(n)
{
	if (n >= 4294967295)
		throw Span::NumberIncorrect();
	this->_store.reserve(n);
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

	std::vector<int> sp = this->_store;
	std::sort(sp.begin(), sp.end());
	int shortest = sp[1] - sp[0];
	for (size_t i = 2; i < sp.size(); i++)
	{
		if (sp[i] - sp[i - 1] < shortest)
			shortest = sp[i] - sp[i - 1];
	}
	return shortest;
}

int Span::longestSpan()
{
	if (this->_store.size() < 2)
		throw Span::NotEnoughNumber();

	int min = *std::min_element(this->_store.begin(), this->_store.end());
	int max = *std::max_element(this->_store.begin(), this->_store.end());
	
	return max - min;
}

void Span::showStore() const
{
	if (this->_store.size() == 0)
		return;
	for (size_t i = 0; i < this->_store.size(); i++)
	{
		std::cout << this->_store[i];
		if (i + 1 < this->_store.size())
			std::cout << ", ";
	}
	std::cout << std::endl;
}

void Span::fillRange()
{
	int add = 0;
	for (size_t i = 0; i < this->_N; i++)
	{
		this->_store.push_back(add);
		add++;
	}
}

void Span::fillSpan(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) + this->_store.size() > this->_N)
		throw Span::StoreIsFull();
	this->_store.insert(this->_store.end(), start, end);
}