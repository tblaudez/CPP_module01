/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:05:27 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 14:06:58 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void)
{
	Human	bob;

	bob.action("look", "sky");
	bob.action("shout", "birds");
	bob.action("melee", "dragon");
	bob.action("range", "worm");
	bob.action("sing", "tree");

	return 0;
}