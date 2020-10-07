/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:05:27 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:55:36 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout


void	memoryLeak() {

	std::string*	panther = new std::string("String panther");

	std::cout << *panther << std::endl;

	delete panther;
}


int	main(void) {

	memoryLeak();
	return 0;
}
