/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:36:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:46:57 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <sstream> // ostringstream


Brain::Brain() {

}

Brain::~Brain() {

}

std::string	Brain::identitfy() const {

	std::ostringstream	oss;

	oss << std::hex << std::showbase << static_cast<void const*>(this);

	return oss.str();
}
