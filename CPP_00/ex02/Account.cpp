/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:33:34 by thmeyer           #+#    #+#             */
/*   Updated: 2023/08/21 13:05:58 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void _displayTimeStamp()
{
	return;
}

int Account::getNbAccounts()
{
	return 0;
}

int Account::getTotalAmount()
{
	return 0;
}

int Account::getNbDeposits()
{
	return 0;
}

int Account::getNbWithdrawals()
{
	return 0;
}

void Account::displayAccountsInfos()
{
	return;
}

Account::Account()
{
}

Account::Account(int initial_deposit)
{
	(void)initial_deposit;
}

Account::~Account()
{
}

void Account::makeDeposit(int deposit)
{
	(void)deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return true;
}

int Account::checkAmount() const
{
	return 0;
}

void Account::displayStatus() const
{
}