/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:38:59 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:47:49 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Weapon.hpp"

#include <string> // duh..


class HumanB {

public:

	HumanB(std::string const& name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack() const;

private:

	std::string	_name;
	Weapon*		_weapon;

};
