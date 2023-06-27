/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:56:34 by synicole          #+#    #+#             */
/*   Updated: 2023/06/25 16:56:35 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
	Zombie::randomChump("Yves (stack)");
	Zombie *zombieHeap = Zombie::newZombie("Jean (heap)");
	zombieHeap->announce();

	delete zombieHeap;
	return (0);
}
