/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:45:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/21 16:03:13 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap()
{
	Pony*	henry = new Pony("Henry", "Blue", 4);

	henry->sayName();
	henry->name = "Karen";
	henry->sayName();
	henry->sayStuff("The earth is flat.");

	delete henry;
}

void	ponyOnTheStack()
{
	Pony	jonas = Pony("Jonas", "Yellow", 7);

	jonas.sayName();
	jonas.name = "Donald";
	jonas.sayName();
	jonas.sayStuff("Quack Quack");
}

int main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return 0;
}
