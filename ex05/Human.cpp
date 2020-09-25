/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:40:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:53:35 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <string>

Human::Human() : _brain(Brain(42))
{
}

Human::~Human()
{
}

std::string	Human::identify(void) const
{
	return this->_brain.identitfy();
}

Brain const&	Human::getBrain(void) const
{
	return this->_brain;
}