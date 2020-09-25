/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:00 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:25:04 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}

Zombie::Zombie(void) : _name("default"), _type("default")
{
}

Zombie::~Zombie(void)
{
}

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Coffeeeeeeeee.." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}