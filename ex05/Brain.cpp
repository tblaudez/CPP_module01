/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:36:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:52:37 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

Brain::Brain(int neurons) : _numberOfNeurons(neurons)
{
}

Brain::~Brain()
{
}

std::string	Brain::identitfy(void) const
{
	std::ostringstream	address;

	address << (void const *)this;
	
	return "0x" + address.str();
}
