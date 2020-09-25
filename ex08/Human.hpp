/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 13:51:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 13:53:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	Human{
private:
	void	meleeAttack(std::string const& target);
	void	rangedAttack(std::string const& target);
	void	intimidatingShout(std::string const& target);

public:
	void	action(std::string const& action_name, std::string const& target);
};