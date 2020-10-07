/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:06 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:56:13 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Zombie.hpp"

#include <string> // duh..


class ZombieEvent {

public:

	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name) const;
	void	randomChump() const;

private:

	std::string	_getRandomName() const;

	std::string	_type;

};
