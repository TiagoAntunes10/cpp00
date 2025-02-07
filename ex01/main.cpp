/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:29:11 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/07 22:49:25 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes.hpp"

int	main(void) {
	std::string	cmd;
	PhoneBook	book;

	while (1) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> cmd;
		std::cout << std::endl;
		if (cmd.compare("ADD") == 0)
			book.add();
		else if (cmd.compare("SEARCH") == 0)
			book.search();
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command";
	}
	return (0);
}
