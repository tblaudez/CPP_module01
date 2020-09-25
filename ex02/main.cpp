/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:41:39 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:09:28 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent event = ZombieEvent();
	Zombie*		zombie1 = NULL;
	Zombie*		zombie2 = NULL;

	event.setZombieType("Festive");
	zombie1 = event.newZombie("Felix");
	zombie1->announce();
	delete zombie1;

	event.setZombieType("Hungry");
	zombie2 = event.newZombie("Larry");
	zombie2->announce();
	delete zombie2;

	event.setZombieType("Lazy");
	event.randomChump();

	return 0;
}