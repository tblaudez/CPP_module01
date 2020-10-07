/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:24:28 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:44:16 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

#include <iostream> // cout, cerr
#include <fstream> // ofstream
#include <ctime> // time, ctime

typedef void (Logger::*logFunctionPointer)(std::string const& message) const;


Logger::Logger(std::string const& filename) : _filename(filename) {

}


Logger::~Logger() {

}


void	Logger::logToConsole(std::string const& message) const {

	std::cout << message << std::endl;
}


void	Logger::logToFile(std::string const& message) const {

	std::ofstream	ofs(this->_filename, std::ios_base::app);

	ofs << message << std::endl;
	ofs.close();
}


std::string	Logger::makeLogEntry(std::string const& message) const {

	time_t		now = time(0);
	std::string	datetime = ctime(&now);

	// Remove trailing newline
	datetime.erase(datetime.size() - 1);

	return std::string("[" + datetime + "] -> " + message);
}


void		Logger::log(std::string const& dest, std::string const& message) {

	logFunctionPointer const	functions[2] = {&Logger::logToConsole, &Logger::logToFile};
	std::string const			destinations[2] = {"console", "file"};

	for (int i=0; i<2; i++) {
		if (dest == destinations[i]) {
			return (this->*functions[i])(message);
		}
	}

	std::cerr << "Unknown destination" << std::endl;
}
