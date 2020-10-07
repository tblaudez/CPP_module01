/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 13:51:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:28:20 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class	Human {

public:

	void	action(std::string const& action_name, std::string const& target);

private:

	void	meleeAttack(std::string const& target);
	void	rangedAttack(std::string const& target);
	void	intimidatingShout(std::string const& target);

};
