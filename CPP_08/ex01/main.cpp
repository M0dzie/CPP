/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:24:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/10/31 13:53:40 by thmeyer          ###   ########.fr       */
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
		Span sp;
		std::cout << BLACK << "Try to add a number in a void span" << RESET << std::endl;
		sp.addNumber(5);
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- SPAN INIT TO 0 ----" << RESET << std::endl;
	{
		try
		{
			Span sp(0);
			std::cout << BLACK << "Try to add a number in a span in a store init at 0" << RESET << std::endl;
			sp.addNumber(5);
		}
		catch (const Span::NumberIncorrect &e)
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
			std::cout << BLACK << "Try to add a number in a span in a store init at -1" << RESET << std::endl;
			sp.addNumber(5);
		}
		catch (const Span::NumberIncorrect &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- SPAN INIT TO UNSIGNED INT MAX - 1 ----" << RESET << std::endl;
	{
		std::cout << BLACK << "Init a Span at unsigned int max - 1" << RESET << std::endl;
		try
		{
			Span sp(4294967294);
			std::cout << BLACK << "Try to add a number in a span in a store init at unsigned int max - 1" << RESET << std::endl;
			sp.addNumber(5);
		}
		catch (const Span::NumberIncorrect &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	return 0;
}