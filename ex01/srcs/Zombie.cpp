/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:34:01 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 15:34:02 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(void) { }

Zombie::~Zombie(void) {
	std::cout << getName() << " is destroyed" << std::endl;
}

void Zombie::announce(void) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

std::string Zombie::getName(void) const {
	if (this->_name.empty())
		return "No_name";
	return this->_name;
}
