/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:24:28 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 14:56:01 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

typedef std::string (Logger::*logFunctionPointer)(std::string const& message) const;

Logger::Logger(std::string filename) : _filename(filename)
{
}

Logger::~Logger()
{
}

std::string	Logger::logToConsole(std::string const& message) const
{
	std::cout << message << std::endl;
	
	return std::string();
}

std::string	Logger::logToFile(std::string const& message) const
{
	std::ofstream	ofs(this->_filename, std::ios_base::app);

	ofs << std::endl << message;
	ofs.close();

	return std::string();
}

std::string	Logger::makeLogEntry(std::string const& message) const
{
	time_t		now = time(0);
	std::string	datetime = ctime(&now);

	// Remove trailing newline
	datetime.erase(std::prev(datetime.end()));

	return std::string("[" + datetime + "] -> " + message);
}

std::string	Logger::log(std::string const& dest, std::string const& message)
{
	logFunctionPointer const	functions[3] = {&Logger::logToConsole, &Logger::logToFile, &Logger::makeLogEntry};
	std::string const			destinations[3] = {"console", "file", "entry"};

	for (int i=0; i<3; i++) {
		if (dest == destinations[i]) {
			return (this->*functions[i])(message);
		}
	}

	return std::string();
}