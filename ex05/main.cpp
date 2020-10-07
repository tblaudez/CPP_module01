/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:45:42 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 12:27:39 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

#include <iostream> // cout


int	main(void) {

	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identitfy() << std::endl;

	return 0;
}
