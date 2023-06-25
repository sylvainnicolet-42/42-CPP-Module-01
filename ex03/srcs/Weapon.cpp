/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:12:48 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 18:12:49 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(void) { }

Weapon::Weapon(std::string type) : _type(type) { }

Weapon::~Weapon(void) { }

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string	Weapon::getType(void) const {
	return this->_type;
}
