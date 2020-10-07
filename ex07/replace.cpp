/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:49:41 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 12:57:00 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string> // duh..
#include <iostream> // cerr
#include <fstream> // ifstream
#include <sstream> // ostringstream


int main(int argc, char const *argv[]) {

	// Check numbers of parameters
	if (argc != 4) {
		std::cerr << "Usage: ./replace FILENAME STRING1 STRING2" << std::endl;
		return 1;
	}

	// Store parameters in strings and check emptiness
	std::string		filename = argv[1], string1 = argv[2], string2 = argv[3];
	if (filename.empty() || string1.empty() || string2.empty()) {
		std::cerr << "Arguments must not be empty" << std::endl;
		return 1;
	}

	// Create a string stream, a file stream and a string
	std::ifstream		ifs(filename);
	std::ostringstream	oss;
	std::string			file_content;

	// Check if file exists
	if (!ifs.is_open()) {
		std::cerr << "File does not exist or could not be opened." << std::endl;
		return 1;
	}

	// Put the content of the file stream inside the string using the ostringstream
	oss << ifs.rdbuf();
	file_content = oss.str();

	// Replace every occurence of string1 by string2 in file_content
	size_t	start_pos = 0;
	while ((start_pos = file_content.find(string1, start_pos)) != std::string::npos) {
		file_content.replace(start_pos, string1.length(), string2);
		start_pos += string2.length();
	}

	// Write the newly replaced string in the replace file
	std::ofstream ofs(filename + ".replace");
	ofs << file_content;

	ifs.close();
	ofs.close();
	return 0;
}
