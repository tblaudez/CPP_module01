/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:31:17 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:48:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string const& type) : _type(type) {

}


Weapon::~Weapon() {

}


std::string const&	Weapon::getType() const {

	return this->_type;
}


void			Weapon::setType(std::string const& type) {

	this->_type = type;
}
