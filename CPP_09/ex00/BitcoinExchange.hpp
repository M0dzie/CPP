/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:30:09 by thmeyer           #+#    #+#             */
/*   Updated: 2023/11/13 11:27:28 by thmeyer          ###   ########.fr       */
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
		virtual const char *what() const throw() {return RED BOLD "Error: " RESET "Wrong format in database";}
	};
	class InvalidDateDataBase : public std::exception
	{
	public:
		virtual const char *what() const throw() {return RED BOLD "Error: " RESET "Invalid date in database" RESET;}
	};
	class InvalidExchangeRate: public std::exception
	{
	public:
		virtual const char *what() const throw() {return RED BOLD "Error: " RESET "Invalid exhange_rate in database" RESET;}
	};
};

void displayErrorMessage(std::string const &msg);

#endif