/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:49:41 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/22 13:40:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[])
{
	// Check numbers of parameters
	if (argc != 4) {
		std::cerr << "usage: ./replace FILENAME STRING1 STRING2" << std::endl;
		return 1;
	}
	
	// Store parameters in strings and check emptiness
	std::string		filename = argv[1], string1 = argv[2], string2 = argv[3];
	if (filename.empty() or string1.empty() or string2.empty()) {
		std::cerr << "The parameters must not be empty." << std::endl;
		return 1;
	}
	
	// Create a string stream, a file stream and a string
	std::ifstream		ifs(filename);
	std::ostringstream	content_stream;
	std::string			content_string;

	// Check if file exists
	if (not ifs.is_open()) {
		std::cerr << "File does not exist or could not be opened." << std::endl;
		return 1;
	}

	// Put the content of the file stream inside the string using the string stream
	content_stream << ifs.rdbuf();
	content_string = content_stream.str();

	// Replace every occurence of string1 by string2 in content_string
	size_t	start_pos = 0;
	while ((start_pos = content_string.find(string1, start_pos)) != std::string::npos) {
		content_string.replace(start_pos, string1.length(), string2);
		start_pos += string2.length();
	}

	// Write the newly replaced string in the replace file
	std::ofstream ofs(filename + ".replace");
	ofs << content_string;
	
	ifs.close();
	ofs.close();
	return 0;
}
