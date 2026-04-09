/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:41:01 by jodone            #+#    #+#             */
/*   Updated: 2026/04/09 11:24:47 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"



int	main(void)
{
	std::string command;
	PhoneBook	phonebook;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT)\n";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			
			std::cout << "Add a contact..\n";
		}
		else if (command == "SEARCH")
			std::cout << "Search a contact..\n";
		else if (command == "EXIT" || std::cin.eof())
		{
			std::cout << "Exit\n";
			break ;
		}
	}
	return (0);
}
