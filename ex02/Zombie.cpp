/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:00 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:00:06 by tblaudez      ########   odam.nl         */
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
