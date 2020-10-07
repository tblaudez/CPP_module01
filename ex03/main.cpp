/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:22:02 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:00:22 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

#include <cstdlib> // srand
#include <ctime> // time

int	main(void) {

	srand(time(0));

	ZombieHorde	horde(42);
	horde.announce();

	return 0;
}
