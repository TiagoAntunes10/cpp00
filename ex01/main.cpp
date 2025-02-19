/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:15:31 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/19 21:41:23 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/includes.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	phone_book;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			phone_book.add();
		else if (cmd.compare("SEARCH") == 0)
			phone_book.search();
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command" << std::endl;
			
	}
	return (0);
}
