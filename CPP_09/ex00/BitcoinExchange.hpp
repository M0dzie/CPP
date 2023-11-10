/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:09 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/10 11:15:19 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <algorithm>
# include <map>
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

class BitcoinExchange
{
private:
	std::map<std::string, float> _dataBase;
	
	BitcoinExchange() {}
	
public:
	BitcoinExchange(std::string const &input);
	BitcoinExchange(BitcoinExchange const &rhs);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();

	bool isDataBaseCorrect();
	void displayInput(std::string const &input);

	class ErrorFormatDataBase : public std::exception
	{
	public:
		virtual const char *what() const throw() {return RED "Error: Wrong format in database" RESET;}
	};
	class InvalidDateDataBase : public std::exception
	{
	public:
		virtual const char *what() const throw() {return RED "Error: Invalid date in database" RESET;}
	};
	class ErrorFormatInput : public std::exception
	{
	public:
		virtual const char *what() const throw() {return RED "Error: Wrong format in input file" RESET;}
	};
};

#endif