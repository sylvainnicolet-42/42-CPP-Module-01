/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    randomChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:40:56 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 15:40:58 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

void Zombie::randomChump(std::string name) {
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}
