/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:41:39 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:55:51 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

#include <cstdlib> // srand
#include <ctime> // time


int	main(void) {

	srand(time(0));

	ZombieEvent	zEvent;

	zEvent.setZombieType("Festive");
	Zombie* zombie1 = zEvent.newZombie("Felix");
	zombie1->announce();

	zEvent.setZombieType("Hungry");
	Zombie* zombie2 = zEvent.newZombie("Larry");
	zombie2->announce();

	zEvent.setZombieType("Lazy");
	zEvent.randomChump();

	delete zombie1;
	delete zombie2;

	return 0;
}
