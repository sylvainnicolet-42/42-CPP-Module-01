/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:57:09 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 08:57:10 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) { }

Harl::~Harl(void) { }

void Harl::complain(std::string level) const {
	// Array of strings
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// Array of pointers to member functions
	void (Harl::*f[4])(void) const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	// Loop through array of strings and compare with level
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*f[i])();
			return ;
		}
	}
}

void Harl::_debug(void) const {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void Harl::_info(void) const {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::_warning(void) const {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) const {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
