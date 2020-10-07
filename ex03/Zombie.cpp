/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:00 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:00:31 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream> // cout


Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {

}

Zombie::~Zombie() {

}

void	Zombie::announce() const {

	std::cout << "<" << this->_name << " (" << this->_type
	<< ")> Coffeeeeeeeee.." << std::endl;
}


std::string const&	Zombie::getName() const {

	return this->_name;
}


std::string const&	Zombie::getType() const {

	return this->_type;
}



void				Zombie::setName(std::string name) {

	this->_name = name;
}


void				Zombie::setType(std::string type) {

	this->_type = type;
}
