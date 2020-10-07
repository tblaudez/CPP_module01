/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:45:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:45:50 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream> // cout


void	ponyOnTheHeap() {

	Pony*	henry = new Pony("Henry", "Blue", 4);

	henry->sayName();
	henry->name = "Karen";
	henry->sayName();
	henry->sayStuff("The earth is flat.");

	delete henry;
}

void	ponyOnTheStack() {

	Pony	jonas("Jonas", "Yellow", 7);

	jonas.sayName();
	jonas.name = "Donald";
	jonas.sayName();
	jonas.sayStuff("Quack Quack");
}

int main(void) {

	std::cout << "----- Pony On The Stack -----" << std::endl;
	ponyOnTheStack();

	std::cout << std::endl << "----- Pony On The Heap -----" << std::endl;
	ponyOnTheHeap();

	return 0;
}
