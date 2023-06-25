/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:52:42 by synicole          #+#    #+#             */
/*   Updated: 2023/06/21 17:52:44 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
	Zombie *zombieHeap = nullptr;

	Zombie::randomChump("Yves (stack)");
	zombieHeap = Zombie::newZombie("Jean (heap)");
	zombieHeap->announce();

	delete zombieHeap;
	return (0);
}
