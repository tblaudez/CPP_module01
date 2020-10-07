/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:35:02 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:47:37 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Weapon.hpp"

#include <string> // duh..


class HumanA {

public:

	HumanA(std::string const& name, Weapon& weapon);
	~HumanA();

	void	attack() const;

private:

	std::string _name;
	Weapon&		_weapon;

};
