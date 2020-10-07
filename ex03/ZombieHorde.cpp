/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:11:00 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:46:45 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int size) : _size(size), _zombies(new Zombie[this->_size]) {

	for (int i=0; i<this->_size; i++) {
		this->_zombies[i].setType("Horde");
		this->_zombies[i].setName(this->_getRandomName());
	}
}

ZombieHorde::~ZombieHorde() {

	delete[] this->_zombies;
}

void	ZombieHorde::announce() const {

	for (int i=0; i<this->_size; i++) {
		this->_zombies[i].announce();
	}
}


std::string	ZombieHorde::_getRandomName() const {

	char const			alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
	int const			nameSize = (rand() % 12) + 1;
	std::string			name(nameSize, '*');

	for (std::string::iterator it=name.begin(); it != name.end(); it++) {
		*it = alphanum[rand() % sizeof(alphanum)];
	}

	return name;
}
