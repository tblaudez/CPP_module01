/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:11:00 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:29:13 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int N) : _size(N), _zombies(new Zombie[N])
{
	static bool call_srand = true;
	std::string const names[] = {"Mathieu", "Gérard", "Antoine", "Fabio", "Philippe",
	"Louis", "Arthur", "Pipoune", "Kipo", "Steven", "Dipper", "Wendy", "Korra", "Aang",
	"Hugo", "Bruce", "Valentin", "Selina", "Ender", "Agatia", "Tristan", "Julien"};

	if (call_srand == true) {
		srand(time(0));
		call_srand = false;
	}

	for (int i=0; i<this->_size; i++) {
		this->_zombies[i].setType("Horde");
		this->_zombies[i].setName(names[rand() % 21]);
	}

	std::cout << "Creating a horde with " << this->_size << " zombies." << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Deleting all " << this->_size << " zombies." << std::endl;
	delete[] this->_zombies;
}

void	ZombieHorde::announce(void) const
{
	for (int i=0; i<this->_size; i++) {
		this->_zombies[i].announce();
	}
}
