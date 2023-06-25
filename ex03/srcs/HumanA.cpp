/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:07 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 18:07:08 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) { }

HumanA::~HumanA(void) { }

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
