/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 13:52:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 14:16:22 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

typedef void(Human::*attackFunctionPointer)(std::string const& target);

void	Human::meleeAttack(std::string const& target)
{
	std::cout << "Human uses a melee attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const& target)
{
	std::cout << "Human uses a range attack on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const& target)
{
	std::cout << "Human shouts loudly on " << target << std::endl;
}

void	Human::action(std::string const& action_name, std::string const& target)
{
	attackFunctionPointer	functions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string				actions[3] = {"melee", "range", "shout"};

	for (int i=0; i<3; i++) {
		if (action_name == actions[i]) {
			(this->*functions[i])(target);
			return;
		}
	}
}
