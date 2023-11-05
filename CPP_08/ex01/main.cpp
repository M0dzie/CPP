/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:24:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/05 19:04:06 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << YELLOW << BOLD << "---- MANDATORY TESTS ----" << RESET << std::endl;
	{
		// try
		// {
			// Span sp = Span(5);
			// std::cout << BLACK << "Store max init is : " << RESET << sp.getN() << std::endl;
			// sp.addNumber(6);
			// sp.addNumber(3);
			// sp.addNumber(17);
			// sp.addNumber(9);
			// sp.addNumber(11);
			// std::cout << BLACK << "Should output : 2" << RESET << std::endl;
			// std::cout << sp.shortestSpan() << std::endl;
			// std::cout << BLACK << "Should output : 14" << RESET << std::endl;
			// std::cout << sp.longestSpan() << std::endl;
		// }
		// catch (const Span::NumberIncorrect &e)
		// {
		// 	std::cerr << e.what() << std::endl;
		// }
		// catch (const Span::StoreIsFull &e)
		// {
		// 	std::cerr << e.what() << std::endl;
		// }
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- VOID SPAN ----" << RESET << std::endl;
	{
		try
		{
			Span sp;
			std::cout << BLACK << "Try to add a number in a void span" << RESET << std::endl;
			sp.addNumber(5);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- SPAN INIT TO 0 ----" << RESET << std::endl;
	{
		try
		{
			Span sp(0);
			std::cout << BLACK << "Try to add a number in a span, store init at 0" << RESET << std::endl;
			sp.addNumber(5);
			std::cout << BLACK << "Test sp(0) = sp1(10)" << RESET << std::endl;
			Span sp1(10);
			sp = sp1;
			if (sp.getN() == sp1.getN())
				std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
			else
				std::cout << RED << BOLD << "Copy operator '=' failed " << RESET << std::endl;
			std::cout << BLACK << "Test sp2(sp1)" << RESET << std::endl;
			Span sp2(sp1);
			if (sp1.getN() == sp2.getN())
				std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
			else
				std::cout << RED << BOLD << "Copy constructor failed " << RESET << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- SPAN INIT TO NEGATIVE VALUE ----" << RESET << std::endl;
	{
		std::cout << BLACK << "Init a Span at -1" << RESET << std::endl;
		try
		{
			Span sp(-1);
			std::cout << BLACK << "Try to add a number in a span, store init at -1" << RESET << std::endl;
			sp.addNumber(5);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- SPAN INIT TO UNSIGNED INT MAX ----" << RESET << std::endl;
	{
		std::cout << BLACK << "Init a Span at unsigned int max" << RESET << std::endl;
		try
		{
			Span sp(UINT_MAX);
			std::cout << BLACK << "Try to add a number in a span, store init at unsigned int max" << RESET << std::endl;
			sp.addNumber(5);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	return 0;
}