/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:39:25 by jodone            #+#    #+#             */
/*   Updated: 2026/04/09 11:49:28 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructor called\n";
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor called\n";
}

void	PhoneBook::Add_contact(std::string& FirstName,
	std::string& LastName, std::string& NickName, std::string& PhoneNumber,
	std::string& DarkestSecret)
{
	int	index = count % 8;
}

void	PhoneBook::Display(void)
{

}
