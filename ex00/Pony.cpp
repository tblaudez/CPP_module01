/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:45:55 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:55:27 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

#include <iostream> // cout


Pony::Pony(std::string name, std::string color, int numberOfLegs) :
name(name), color(color), numberOfLegs(numberOfLegs) {

	std::cout << "A " << this->color << " pony named " << this->name << " with "
	<< this->numberOfLegs << " legs is born." << std::endl;
}


Pony::~Pony() {

	std::cout << this->name << " died. How sad.." << std::endl;
}


void	Pony::sayStuff(std::string const& stuff) const {

	std::cout << this->name << " just said \"" << stuff << "\"" << std::endl;
}


void	Pony::sayName() const {

	std::cout << "Oy! My name is " << this->name << std::endl;
}
