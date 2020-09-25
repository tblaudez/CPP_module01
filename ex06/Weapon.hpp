/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:29:46 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 12:34:24 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon();

	std::string const&	getType(void) const;
	void				setType(std::string type);
};