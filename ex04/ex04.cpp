/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 17:30:30 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 11:50:34 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout
#include <string> // duh..


int	main(void) {

	std::string		str("HI THIS IS BRAIN");
	std::string*	str_ptr = &str;
	std::string&	str_ref = str;

	std::cout << *str_ptr << std::endl;
	std::cout << str_ref << std::endl;

	return 0;
}
