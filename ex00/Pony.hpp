/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:45:57 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 16:02:35 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Pony
{
public:
	Pony(std::string name, std::string color, int number_of_legs);
	~Pony();

	void	sayStuff(std::string stuff) const;
	void	sayName(void) const;

	std::string name;
	std::string	color;
	int			number_of_legs;		
};