/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:18:21 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/02/22 21:01:42 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string input;
	std::string exit("EXIT");
	std::string search("SEARCH");
	std::string add("ADD");

	while (input != exit)
	{
		getline(std::cin, input);
		if (input == search)
			search_in_agenda();
		else if (input == add)
			add_to_agenda();
	}
	return 0;
}

void search_in_agenda()
{
}

void add_to_agenda()
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string dark_secret;
	std::string phone_number;
	
	std::cout << "first name: "; 
	getline(std::cin, first_name);
	std::cout << "last name: ";
	getline(std::cin, last_name);
	std::cout << "nick name: ";
	getline(std::cin, nick_name);
	std::cout << "phone number: ";
	getline(std::cin, phone_number);
	std::cout << "dark secret: ";
	getline(std::cin, dark_secret);
}