/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:31:14 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 14:56:35 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>

int	main(void)
{
	Logger logger("logger.log");

	logger.log("console", "Hello There");
	logger.log("file", "Hello file");
	std::cout << logger.log("entry", "Hello log") << std::endl;
	logger.log("nowhere", "WTF?");

	return 0;
}