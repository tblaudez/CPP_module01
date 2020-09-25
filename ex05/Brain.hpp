/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:35:45 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:50:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Brain
{
private:
	int	_numberOfNeurons;

public:
	Brain(int neurons);
	~Brain();

	std::string	identitfy(void) const;
};