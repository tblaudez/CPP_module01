/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:40:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:00:44 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human() {

}

Human::~Human() {

}

std::string	Human::identify() const {

	return this->_brain.identitfy();
}

Brain const&	Human::getBrain() const {

	return this->_brain;
}
