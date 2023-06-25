/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:01:26 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 18:01:28 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>
#include <string>

class Weapon {
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		void		setType(std::string type);
		std::string	getType(void) const;
	private:
		std::string	_type;
};

#endif
