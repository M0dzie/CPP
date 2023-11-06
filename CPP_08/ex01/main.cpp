/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:24:56 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/06 17:34:29 by thmeyer          ###   ########.fr       */
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
		std::cout << BLACK << "Use 2x addNumber" << RESET << std::endl;
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
		sp.addNumber(1);
		std::cout << BLACK << "Using longesSpan()" << RESET << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << BOLD << "---- TEST LONGESTSPAN ----" << RESET << std::endl;
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
	std::cout << YELLOW << BOLD << "---- TEST SHORTESTSPAN ----" << RESET << std::endl;
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
	std::cout << YELLOW << BOLD << "---- TEST WITH 10 000 NUMBERS ----" << RESET << std::endl;
	try
	{
		Span sp = Span(100000);
		sp.fillRandom();
		std::cout << BLACK << "Shortest span : " << RESET << sp.shortestSpan() << std::endl;
		std::cout << BLACK << "Longest span : " << RESET << sp.longestSpan() << std::endl;
	} catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// try {
	// 	Span sp = Span(8);
	// 	std::vector<unsigned int> numbers(10, 1);
	// 	sp.fillRange(numbers.begin(d), numbers.end());
	// 	sp.show();
	// } catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl << std::endl;
	// }

	// try {
	// 	Span sp = Span(100);
	// 	std::vector<unsigned int> numbers(10, 55);
	// 	sp.addNumber(1);
	// 	sp.addNumber(3);
	// 	sp.addNumber(6);
	// 	sp.fillRange(numbers.begin(), numbers.end());
	// 	sp.show();
	// 	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	// 	std::cout << "Longest span : " << sp.longestSpan() << std::endl << std::endl;
	// } catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << YELLOW << BOLD << "---- VOID SPAN ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		Span sp;
	// 		std::cout << BLACK << "Try to add a number in a void span" << RESET << std::endl;
	// 		sp.addNumber(5);
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- SPAN INIT TO 0 ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		Span sp(0);
	// 		std::cout << BLACK << "Try to add a number in a span, store init at 0" << RESET << std::endl;
	// 		sp.addNumber(5);
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- TESTING COPY OPERATOR AND COPY CONSTRUCTOR ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		Span sp;
	// 		Span sp1(10);
	// 		std::cout << BLACK << "Test sp(0) = sp1(10)" << RESET << std::endl;
	// 		sp = sp1;
	// 		if (sp.getN() == sp1.getN())
	// 			std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
	// 		else
	// 			std::cout << RED << BOLD << "Copy operator '=' failed " << RESET << std::endl;
	// 		std::cout << BLACK << "Test sp2(sp1)" << RESET << std::endl;
	// 		Span sp2(sp1);
	// 		if (sp1.getN() == sp2.getN())
	// 			std::cout << GREEN << BOLD << "OK!" << RESET << std::endl;
	// 		else
	// 			std::cout << RED << BOLD << "Copy constructor failed " << RESET << std::endl;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- TESTING SHORTESTSPAN TO A STORE OF 0 ELEMENT ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		Span sp(10);
	// 		std::cout << BLACK << "Try to find the shortest span of 0 element" << RESET << std::endl;
	// 		std::cout << sp.shortestSpan() << std::endl;
	// 	}
	// 	catch (const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
		
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- TESTING SHORTESTSPAN TO A STORE OF 1 ELEMENT ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		Span sp(10);
	// 		std::cout << BLACK << "Add number to store" << RESET << std::endl;
	// 		sp.addNumber(2147483647);
	// 		std::cout << BLACK << "Try to find the longest span of 1 element" << RESET << std::endl;
	// 		std::cout << sp.shortestSpan() << std::endl;
	// 	}
	// 	catch (const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
		
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- SPAN INIT TO NEGATIVE VALUE ----" << RESET << std::endl;
	// {
	// 	std::cout << BLACK << "Init a Span at -1" << RESET << std::endl;
	// 	try
	// 	{
	// 		Span sp(-1);
	// 		std::cout << BLACK << "Try to add a number in a span, store init at -1" << RESET << std::endl;
	// 		sp.addNumber(5);	
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- SPAN INIT TO UNSIGNED INT MAX ----" << RESET << std::endl;
	// {
	// 	std::cout << BLACK << "Init a Span at unsigned int max" << RESET << std::endl;
	// 	try
	// 	{
	// 		Span sp(4294967295);
	// 		std::cout << BLACK << "Try to add a number in a span, store init at unsigned int max" << RESET << std::endl;
	// 		sp.addNumber(5);
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- ADD MORE ELEMENTS THAN A STORE CAN HANDLE ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		std::cout << BLACK << "Init span to 5" << RESET << std::endl;
	// 		Span sp(5);
	// 		std::cout << BLACK << "Store capacity is : " << RESET << sp.getCapacity() << std::endl;
	// 		for (int i = 0; i < 10; i++)
	// 		{
	// 			sp.addNumber(10);
	// 			std::cout << GREEN << "Number " << i << " successfully add" << RESET << std::endl;
	// 		}
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- TESTING FILLSPAN ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		Span sp(10000);
	// 		std::cout << BLACK << "Store capacity is : " << RESET << sp.getCapacity() << std::endl;
	// 		std::vector<int> fill(10000, 55);
	// 		std::cout << BLACK << "Calling fillSpan() function" << RESET << std::endl;
	// 		sp.fillSpan(fill.begin(), fill.end());
	// 		// std::cout << BLACK << "Showing the store : " << RESET;
	// 		// sp.showStore();
	// 		std::cout << BLACK << "Shortest span : " << RESET << sp.shortestSpan() << std::endl;
	// 		std::cout << BLACK << "Longest span : " << RESET << sp.longestSpan() << std::endl;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	// std::cout << std::endl;
	// std::cout << YELLOW << BOLD << "---- TESTING INCORRECT FILLSPAN ----" << RESET << std::endl;
	// {
	// 	try
	// 	{
	// 		Span sp(10000);
	// 		std::cout << BLACK << "Store capacity is : " << RESET << sp.getCapacity() << std::endl;
	// 		std::cout << BLACK << "Init a vector with 10001 elements" << RESET << std::endl;
	// 		std::vector<int> fill(10001, 42);
	// 		std::cout << BLACK << "Calling fillSpan() function" << RESET << std::endl;
	// 		sp.fillSpan(fill.begin(), fill.end());
	// 		std::cout << BLACK << "Shortest span : " << RESET << sp.shortestSpan() << std::endl;
	// 		std::cout << BLACK << "Longest span : " << RESET << sp.longestSpan() << std::endl;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	return 0;
}