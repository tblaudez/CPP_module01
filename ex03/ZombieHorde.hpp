/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:10:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:46:46 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Zombie.hpp"


class ZombieHorde {

public:
	ZombieHorde(int size);
	~ZombieHorde();

	void	announce() const;

private:

	std::string	_getRandomName() const;

	int		_size;
	Zombie*	_zombies;

};
