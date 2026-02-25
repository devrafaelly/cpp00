/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:18:21 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/02/25 05:37:38 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook 	PhoneBook;
	std::string input;

	while (input != "EXIT")
	{
		std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		getline(std::cin, input);
		if (input == "ADD")
			PhoneBook.AddToPhoneBook();
		else if (input == "SEARCH")
		{
			PhoneBook.PrintPhoneBook();
			PhoneBook.GetChosenContact();
		}
	}
	return 0;
}
