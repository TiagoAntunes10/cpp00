/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:09:48 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/04 12:02:58 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

inline static void	putstr_upper(std::string argv)
{
	long unsigned int	i;

	i = 0;
	while (i < argv.length())
		std::cout << (char) toupper(argv[i++]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	argv++;
	while (*argv != NULL)
	{
		putstr_upper(*argv);
		argv++;
	}
	std::cout << "\n";
}
