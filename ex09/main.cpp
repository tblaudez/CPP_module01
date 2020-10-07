/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:31:14 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:45:54 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"


int	main(void) {

	Logger logger("logger.log");

	logger.log("console", "Hello There");
	logger.log("file", "Hello file");
	logger.log("nowhere", "WTF?");

	return 0;
}
