/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:26:19 by jodone            #+#    #+#             */
/*   Updated: 2026/04/16 17:10:09 by jimbow           ###   ########.fr       */
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
	~PhoneBook(void);

	void	Add_contact(void);
	void	Search(void);
};
