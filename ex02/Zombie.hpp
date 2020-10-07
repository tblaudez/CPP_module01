/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:02 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:46:32 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class Zombie {

public:

	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce() const;

private:

	std::string	_name;
	std::string	_type;

};
