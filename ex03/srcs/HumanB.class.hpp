/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:03:57 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 18:03:58 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include <iostream>
#include <string>
#include "Weapon.class.hpp"

class HumanB {
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB(void);

	void		attack(void) const;
	void		setWeapon(Weapon &weapon);
private:
	std::string	_name;
	Weapon		_weapon;
};

#endif
