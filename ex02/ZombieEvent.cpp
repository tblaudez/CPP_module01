/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:06:55 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent() : _type("default")
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) const
{
	return new Zombie(name, this->_type);
}
	
void	ZombieEvent::randomChump() const
{
	static bool call_srand = true;
	std::string const names[] = {"Mathieu", "Gérard", "Antoine", "Fabio", "Philippe", "Louis", "Arthur"};

	if (call_srand == true) {
		srand(time(0));
		call_srand = false;
	}

	Zombie	chump = Zombie(names[rand() % 7], this->_type);
	chump.announce();
}