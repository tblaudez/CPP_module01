/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:29:46 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:48:07 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class Weapon {

public:

	Weapon(std::string const& type);
	~Weapon();

	std::string const&	getType() const;
	void				setType(std::string const& type);

private:

	std::string	_type;

};
