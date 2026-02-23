/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 19:09:09 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/02/22 20:14:12 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	
	int i = 1;
	while (i < ac)
	{
		int j = 0;
		while (av[i][j])
		{
			std::cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
		std::cout << std::endl;
	}
	return 0;
}