/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:06 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 16:52:14 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	_type;

public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name) const;
	void	randomChump() const;
};