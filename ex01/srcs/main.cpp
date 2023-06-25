/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:56:54 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 16:56:59 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.class.hpp"

int main()
{
	// Parameters
	int zombieNumber = 5;
	std::string zombieName = "Yves";

	// Create a zombie horde
	Zombie *zombieHorde = Zombie::zombieHorde(zombieNumber, zombieName);

	// Announce the horde
	for (int i = 0; i < zombieNumber; i++)
		zombieHorde[i].announce();

	// Delete the horde
	delete[] zombieHorde;

	return (0);
}
