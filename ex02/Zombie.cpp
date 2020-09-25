/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:00 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:07:34 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << this->_name << " is now a " << this->_type << " zombie." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " the " << this->_type << " zombie has been nuked." << std::endl;
}

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Coffeeeeeeeee.." << std::endl;
}