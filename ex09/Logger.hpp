/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:19:55 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 14:54:43 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Logger
{
private:
	std::string	_filename;
	
	std::string	logToConsole(std::string const& message) const;
	std::string	logToFile(std::string const& message) const;
	std::string	makeLogEntry(std::string const& message) const;
	
public:
	Logger(std::string filename);
	~Logger();

	std::string	log(std::string const& dest, std::string const& message);
};