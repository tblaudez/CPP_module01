/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:45:57 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:46:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class Pony {

public:

	Pony(std::string name, std::string color, int number_of_legs);
	~Pony();

	void	sayStuff(std::string const& stuff) const;
	void	sayName() const;

	std::string name;
	std::string	color;
	int			numberOfLegs;

};
