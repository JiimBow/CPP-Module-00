/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:41:01 by jodone            #+#    #+#             */
/*   Updated: 2026/04/16 18:26:12 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <csignal>
#include "PhoneBook.class.hpp"



int	main(void)
{
	std::string command;
	PhoneBook	phonebook;

	std::signal(SIGQUIT, SIG_IGN);
	std::signal(SIGINT, SIG_IGN);
	while (true)
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter command (ADD, SEARCH, EXIT)\n";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
		{	
			std::cout << "Add a contact..\n";
			phonebook.Add_contact();
		}
		else if (command == "SEARCH")
		{
			std::cout << "Search a contact..\n";
			phonebook.Search();
		}
		else if (command == "EXIT" || std::cin.eof())
		{
			std::cout << "Exit\n";
			break ;
		}
	}
	return (0);
}
