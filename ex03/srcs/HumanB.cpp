/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:10:15 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 18:10:17 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon() { }

HumanB::~HumanB(void) { }

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = weapon;
}
