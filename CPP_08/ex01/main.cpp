/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:24:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/07 18:05:32 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << YELLOW << BOLD << "---- MANDATORY TESTS ----" << RESET << std::endl;
	try
	{
		std::cout << BLACK << "Init span to 5" << RESET << std::endl;
		Span sp = Span(5);
		std::cout << BLACK << "Store capacity is : " << RESET << sp.getCapacity() << std::endl;
		std::cout << BLACK << "Add 5 numbers" << RESET << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << BLACK << "Should output : 2 => " << RESET;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << BLACK << "Should output : 14 => " << RESET;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- NOT ENOUGH SPACE IN STORE ----" << RESET << std::endl;
	try
	{
		std::cout << BLACK << "Init span at 1" << RESET << std::endl;
		Span sp = Span(1);
		std::cout << BLACK << "Add 2 numbers" << RESET << std::endl;
		sp.addNumber(10);
		sp.addNumber(10);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- NOT ENOUGH ELEMENT FOR LONGESTSPAN ----" << RESET << std::endl;
	try
	{
		std::cout << BLACK << "Init span at 1" << RESET << std::endl;
		Span sp = Span(1);
		std::cout << BLACK << "Add 1 numbers" << RESET << std::endl;
		sp.addNumber(1);
		std::cout << BLACK << "Using longestSpan()" << RESET << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- LONGESTSPAN ----" << RESET << std::endl;
	try
	{
		Span sp = Span(8);
		sp.addNumber(1);
		sp.addNumber(3);
		sp.addNumber(10);
		sp.addNumber(17);
		sp.addNumber(30000);
		sp.addNumber(0);
		sp.addNumber(14);
		sp.addNumber(45000);
		std::cout << BLACK << "Display store : " << RESET;
		sp.showStore();
		std::cout << BLACK << "Longest span : " << RESET << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- SHORTESTSPAN ----" << RESET << std::endl;
	try
	{
		Span sp = Span(8);
		sp.addNumber(10);
		sp.addNumber(20);
		sp.addNumber(30);
		sp.addNumber(40);
		sp.addNumber(50);
		sp.addNumber(60);
		sp.addNumber(71);
		sp.addNumber(72);
		std::cout << BLACK << "Display store : " << RESET;
		sp.showStore();
		std::cout << BLACK << "Shortest span : " << RESET << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- OVERFLOW OF INT ----" << RESET << std::endl;
	try
	{
		Span sp = Span(8);
		sp.addNumber(10);
		sp.addNumber(30);
		sp.addNumber(2147483647);
		sp.addNumber(-2147483648);
		sp.addNumber(50);
		sp.addNumber(-60);
		sp.addNumber(71);
		sp.addNumber(72);
		std::cout << BLACK << "Display store : " << RESET;
		sp.showStore();
		std::cout << BLACK << "Longest span : " << RESET << sp.longestSpan() << std::endl;
		std::cout << BLACK << "Shortest span : " << RESET << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- TEST WITH 100 000 NUMBERS ----" << RESET << std::endl;
	try
	{
		std::cout << BLACK << "Init Span at 100 000" << RESET << std::endl;
		Span sp = Span(100000);
		std::cout << BLACK << "Using fillRange()" << RESET << std::endl;
		sp.fillRange();
		std::cout << BLACK << "Shortest span : " << RESET << sp.shortestSpan() << std::endl;
		std::cout << BLACK << "Longest span : " << RESET << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- USING INCORRECT FILLSPAN  ----" << RESET << std::endl;
	try
	{
		std::cout << BLACK << "Init Span at 8" << RESET << std::endl;
		Span sp = Span(8);
		std::cout << BLACK << "Init vector at 10" << RESET << std::endl;
		std::vector<int> numbers(10, 1);
		std::cout << BLACK << "Using fillSpan() : " << RESET;
		sp.fillSpan(numbers.begin(), numbers.end());
		sp.showStore();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- USING CORRECT FILLSPAN  ----" << RESET << std::endl;
	try
	{
		std::cout << BLACK << "Init Span at 100" << RESET << std::endl;
		Span sp = Span(100);
		std::cout << BLACK << "Init vector at 10" << RESET << std::endl;
		std::vector<int> numbers(10, 55);
		std::cout << BLACK << "Add 3 number to Span" << RESET << std::endl;
		sp.addNumber(1);
		sp.addNumber(3);
		sp.addNumber(6);
		std::cout << BLACK << "Display store : " << RESET;
		sp.showStore();
		std::cout << BLACK << "Using fillSpan()" << RESET << std::endl;
		sp.fillSpan(numbers.begin(), numbers.end());
		std::cout << BLACK << "Display store : " << RESET;
		sp.showStore();
		std::cout << BLACK << "Shortest span : " << RESET << sp.shortestSpan() << std::endl;
		std::cout << BLACK << "Longest span : " << RESET << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}