/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:40:57 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:47:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream> // cout


HumanB::HumanB(std::string const& name) : _name(name), _weapon(NULL) {

}


HumanB::~HumanB() {

}


void	HumanB::setWeapon(Weapon& weapon) {

	this->_weapon = &weapon;
}


void	HumanB::attack() const {

	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
