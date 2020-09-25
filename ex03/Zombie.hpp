/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:10:02 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:23:16 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
private:
	std::string	_name;
	std::string	_type;

public:
	Zombie(std::string name, std::string type);
	Zombie(void);
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);
	void	setType(std::string type);
};