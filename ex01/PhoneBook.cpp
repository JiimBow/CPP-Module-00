/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:39:25 by jodone            #+#    #+#             */
/*   Updated: 2026/04/16 18:22:31 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructor called\n";
	count = 0;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor called\n";
}

static std::string getInput(const std::string& prompt)
{
	std::string input;

	if (std::cin.eof())
		return "" ;
	while (input.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			return "";
	}
	return (input);
	
}

void	PhoneBook::Add_contact(void)
{
	std::string FirstName, LastName, NickName, PhoneNumber, DarkestSecret;
	
	FirstName = getInput("Enter first name : ");
	LastName = getInput("Enter last name : ");
	NickName = getInput("Enter nickname : ");
	PhoneNumber = getInput("Enter phone number : ");
	DarkestSecret = getInput("Enter darkest secret : ");
	std::cout << std::endl;
	
	int	index = count % 8;
	
	contacts[index].first_name = FirstName;
	contacts[index].last_name = LastName;
	contacts[index].nickname = NickName;
	contacts[index].phone_number = PhoneNumber;
	contacts[index].darkest_secret = DarkestSecret;
	
	count++;
}

std::string ColumnDisplay(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return (str);
}

void	PhoneBook::Search(void)
{
	if (count == 0)
	{
		std::cout << "No contacts found\n\n";
		return ;
	}
	int	nb_of_contact = std::min(count, 8);

	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname\n";

	for (int i = 0; i < nb_of_contact; i++)
	{
		std::cout	<< std::setw(10) << i << "|"
					<< std::setw(10) << ColumnDisplay(contacts[i].first_name) << "|"
					<< std::setw(10) << ColumnDisplay(contacts[i].last_name) << "|"
					<< std::setw(10) << ColumnDisplay(contacts[i].nickname)
					<< "\n";
	}

	std::cout << "Enter index : ";
	std::string input;
	int	index = 0;
	while (true)
	{
		input = getInput("");
		if (std::cin.eof())
			return ;
		if (input.length() == 1)
		{
			index = input[0] - '0';
			if (index >= 0 && index <= 7 && index < nb_of_contact)
				break ;
		}
		std::cout << "This index is invalid\n";
	}
	
	std::cout << "First Name: " << contacts[index].first_name << "\n";
	std::cout << "Last Name: " << contacts[index].last_name << "\n";
	std::cout << "NickName: " << contacts[index].nickname << "\n";
	std::cout << "Phone Number: " << contacts[index].phone_number << "\n";
	std::cout << "Darkest Secret: " << contacts[index].darkest_secret << "\n\n";
}
