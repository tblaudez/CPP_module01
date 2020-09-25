/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:39:12 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:53:01 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

class Human
{
private:
	Brain const	_brain;

public:
	Human();
	~Human();

	std::string		identify(void) const;
	Brain const&	getBrain(void) const;
};