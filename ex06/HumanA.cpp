/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:36:56 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:01:09 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream> // cout


HumanA::HumanA(std::string const& name, Weapon& weapon) : _name(name), _weapon(weapon) {

}


HumanA::~HumanA() {

}


void	HumanA::attack() const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
