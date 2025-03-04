/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:43:06 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/04 12:07:42 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"

class PhoneBook {

	private:
		Contact	contact[8];
		int		index;
		void	write_contact( int i );

	public:
		void	add();
		void	search();
		PhoneBook ( void );
};

#endif
