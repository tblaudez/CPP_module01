/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:10:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 17:20:59 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde
{
private:
	int		_size;
	Zombie*	_zombies;

public:
	ZombieHorde(int N);
	~ZombieHorde();

	void	announce(void) const;
};