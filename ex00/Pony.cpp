/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:45:55 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 15:59:31 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

Pony::Pony(std::string p_name, std::string p_color, int p_number_of_legs) : name(p_name), color(p_color), number_of_legs(p_number_of_legs)
{
	std::cout << "A " << this->color << " pony named " << this->name << " with " << this->number_of_legs << " legs is born." << std::endl;	
}

Pony::~Pony()
{
	std::cout << this->name << " died. How sad.." << std::endl;
}

void	Pony::sayStuff(std::string stuff) const
{
	std::cout << this->name << " just said \"" << stuff << "\"" << std::endl;
}

void	Pony::sayName(void) const
{
	std::cout << "My name is " << this->name << std::endl;
}