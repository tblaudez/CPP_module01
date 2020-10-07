/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 11:46:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

#include <cstdlib> // rand


ZombieEvent::ZombieEvent() : _type("default") {

}

ZombieEvent::~ZombieEvent() {

}

void	ZombieEvent::setZombieType(std::string type) {

	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) const {

	return new Zombie(name, this->_type);
}

void	ZombieEvent::randomChump() const {

	std::string	name = this->_getRandomName();

	Zombie	chump = Zombie(name, this->_type);
	chump.announce();
}


std::string	ZombieEvent::_getRandomName() const {

	char const			alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
	int const			nameSize = rand() % 12 + 1;
	std::string			name(nameSize, '*');

	for (std::string::iterator it=name.begin(); it != name.end(); it++) {
		*it = alphanum[rand() % sizeof(alphanum)];
	}

	return name;
}
