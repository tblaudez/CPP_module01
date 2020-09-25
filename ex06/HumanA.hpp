/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:35:02 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 12:37:29 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string _name;
	Weapon&		_weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack(void) const;
};