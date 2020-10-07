/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:39:12 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 12:27:29 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Brain.hpp"

#include <string> // duh..


class Human {

public:

	Human();
	~Human();

	std::string		identify() const;
	Brain const&	getBrain() const;

private:

	Brain const	_brain;

};
