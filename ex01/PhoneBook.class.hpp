/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:26:19 by jodone            #+#    #+#             */
/*   Updated: 2026/04/09 11:48:39 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.class.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		count;
public:
	PhoneBook(void);
	PhoneBook() : count(0){}
	~PhoneBook(void);

	void	Add_contact(std::string& FirstName, std::string& LastName,
		std::string& NickName, std::string& PhoneNumber,
		std::string& DarkestSecret);
	void	Display(void);
};
