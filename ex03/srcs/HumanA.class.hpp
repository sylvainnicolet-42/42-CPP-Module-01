/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:03:49 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 18:03:50 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include <iostream>
#include <string>
#include "Weapon.class.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void		attack(void) const;
private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif