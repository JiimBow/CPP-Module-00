/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:58:05 by jimbow            #+#    #+#             */
/*   Updated: 2026/04/20 12:32:24 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::_displayTimestamp(void)
{
	std::time_t now = std::time(NULL);
	std::tm* t = std::localtime(&now);
	std::cout	<< "[" << (t->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') << (t->tm_mon + 1)
				<< std::setw(2) << std::setfill('0') << (t->tm_mday) << "_"
				<< std::setw(2) << std::setfill('0') << (t->tm_hour)
				<< std::setw(2) << std::setfill('0') << (t->tm_min)
				<< std::setw(2) << std::setfill('0') << (t->tm_sec)
				<< "] ";
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;

    _amount = initial_deposit;
    _totalAmount += initial_deposit;

    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout	<< "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout	<< "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";p_amount:" << _amount;
	
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	std::cout	<< ";deposits:" << deposit << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";p_amount:" << _amount;
	
	if (withdrawal > _amount)
	{
		std::cout	<< ";withdrawal:refused\n";
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	std::cout	<< ";withdrawal:" << withdrawal << ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:"
				<< _nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts << ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
				<< _totalNbWithdrawals << "\n";
}