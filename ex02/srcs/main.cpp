/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:18:04 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 17:18:05 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	// La string de référence
	std::string	str = "HI THIS IS BRAIN";
	// Un pointeur sur la string
	std::string	*stringPTR = &str;
	// Une référence sur la string
	std::string	&stringREF = str;

	std::cout << "--- ADDRESS ---" << std::endl;
	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "--- VALUE ---" << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;

	return (0);
}