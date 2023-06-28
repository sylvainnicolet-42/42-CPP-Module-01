/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:28:59 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 15:29:01 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);

		void			announce(void) const;
		static Zombie*	zombieHorde(int N, std::string name);
		void			setName(std::string name);
		std::string		getName(void) const;
	private:
		std::string	_name;
};

#endif
