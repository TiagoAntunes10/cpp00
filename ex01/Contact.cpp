/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 21:43:14 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/04 22:55:36 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/includes.hpp"


static int	get_input(std::string msg, std::string *param) {
	std::cout << msg;
	if (!(std::getline(std::cin, *param)))
		exit(1);
	if ((*param).length() == 0)
		return (1);
	return (0);

}

int	Contact::create(void) {
	if (get_input("First name: ", &first_name) == 1)
		return (1);
	if (get_input("Last name: ", &last_name) == 1) {
		first_name.erase();
		return (1);
	}
	if (get_input("Nickname: ", &nickname) == 1) {
		first_name.erase();
		last_name.erase();
		return (1);
	}
	if (get_input("Phone number: ", &phone_number) == 1) {
		first_name.erase();
		last_name.erase();
		nickname.erase();
		return (1);
	}
	if (get_input("Darkest secret: ", &dark_secret) == 1) {
		first_name.erase();
		last_name.erase();
		nickname.erase();
		phone_number.erase();
		return (1);
	}
	return (0);
}

std::string	Contact::get_first_name(void) {
	return (first_name);
}

std::string	Contact::get_last_name(void) {
	return (last_name);
}

std::string	Contact::get_nickname(void) {
	return (nickname);
}

std::string	Contact::get_phone_number(void) {
	return (phone_number);
}

std::string	Contact::get_dark_secret(void) {
	return (dark_secret);
}

void	Contact::show_info(void) {
	std::cout << "First name: " << get_first_name() << std::endl;
	std::cout << "Last name: " << get_last_name() << std::endl;
	std::cout << "Nickname: " << get_nickname() << std::endl;
	std::cout << "Phone number: " << get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << get_dark_secret() << std::endl;
}
