/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:07:07 by tialbert          #+#    #+#             */
/*   Updated: 2025/02/19 22:41:42 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

	public:
		void		create(void);
		std::string	get_first_name(void);
		std::string get_last_name(void);
		std::string	get_nickname(void);
		std::string get_phone_number(void);
		std::string get_dark_secret(void);
		void		show_info(void);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string	dark_secret;
};

#endif
