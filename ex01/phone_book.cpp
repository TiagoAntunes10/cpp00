/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:15:58 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/20 22:09:17 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/includes.hpp"

int	PhoneBook::index = 0;

void	PhoneBook::add(void)
{
	contact[index].create();
	if (index == 7)
		index = 0;
	else
		index++;
}

static void	write_line(std::string info, int i) {
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << info << "|";
	if (i == 3)
		std::cout << std::endl;
}

void	PhoneBook::search(void) {
	int					i;
	int					num;
	std::stringstream	ss;
	std::string			answer;
	std::string			str;

	i = 0;
	if (contact[i].get_first_name().length() == 0) {
		std::cout << "No contacts saved yet!" << std::endl;
		return ;
	}
	write_line("index", 0);
	write_line("First name", 1);
	write_line("Last name", 2);
	write_line("Nickname", 3);
	while (i < 8 && contact[i].get_first_name().length() != 0) {
		ss << i;
		ss >> str;
		write_line(str, 0);
		write_line(contact[i].get_first_name(), 1);
		write_line(contact[i].get_last_name(), 2);
		write_line(contact[i++].get_nickname(), 3);
		ss.clear();
	}

	std::cout << "Select the contact index to display: ";
	if (!(std::cin >> answer))
		exit(1);
	if (answer.length() > 1 || answer.length() == 0) {
		std::cout << "Invalid value" << std::endl;
		return ;
	}
	num = atoi(answer.c_str());
	if (num >= i || num < 0) {
		std::cout << "Not a valid index" << std::endl;
		return ;
	}
	contact[num].show_info();
}
