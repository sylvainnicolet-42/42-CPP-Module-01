/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:57:33 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 08:57:36 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	// Check arguments
	if (argc != 2) {
		std::cout << "❌  Wrong arguments" << std::endl;
		std::cout << "Usage: ./HarlFilter <level>" << std::endl;
		return (1);
	}

	Harl	harl;
	harl.complain(argv[1]);

	return (0);
}
