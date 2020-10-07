/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:19:55 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 13:42:41 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class Logger {

public:

	Logger(std::string const& filename);
	~Logger();

	void	log(std::string const& dest, std::string const& message);

private:

	std::string	const	_filename;

	void				logToConsole(std::string const& message) const;
	void				logToFile(std::string const& message) const;
	std::string			makeLogEntry(std::string const& message) const;
};
