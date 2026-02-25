/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 20:00:43 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/02/25 05:58:52 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact {
	
	public:
		void SetContact( void );
		void PrintContacts( int Index );
		void PrintChosenContact();
		
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string DarkSecret;
		std::string PhoneNumber;

		void PrintField( std::string Text );
		void ShrinkString( std::string Text );
		void GetInfo( std::string &Field, std::string Text, bool Phone );
};

#endif