/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:14:21 by synicole          #+#    #+#             */
/*   Updated: 2023/06/27 15:14:23 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	// Check if there are 3 arguments
	if (argc != 4)
	{
		std::cout << "❌  Wrong arguments" << std::endl;
		std::cout << "📖 Usage: ./sed <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	// Get arguments
	std::string filenameIn = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string filenameOut = filenameIn + ".replace";
	int 		nReplaced = 0;

	// Open infile and outfile
	// Documentation: https://www.javatpoint.com/opening-and-closing-a-file-in-c-in-cpp-pdf
	std::ifstream infile(filenameIn, std::ios::in);
	if (!infile.is_open())
	{
		std::cout << "❌  Error: could not open infile" << std::endl;
		return (1);
	}

	std::ofstream outfile(filenameOut, std::ios::out);
	if (!outfile.is_open())
	{
		std::cout << "❌  Error: could not open outfile" << std::endl;
		return (1);
	}

	// Read infile line by line
	std::string line;
	while (std::getline(infile, line))
	{
		std::string replacedLine;
		size_t pos = 0;

		// Documentation: https://www.cplusplus.com/reference/string/string/find/
		size_t foundPos = line.find(s1, pos);
		while (foundPos != std::string::npos)
		{
			// Append line until foundPos
			replacedLine.append(line.substr(pos, foundPos - pos));

			// Append s2
			replacedLine.append(s2);

			// Increment pos to be after s1
			pos = foundPos + s1.length();
			foundPos = line.find(s1, pos);
			nReplaced++;
		}
		// Append the rest of the line
		replacedLine.append(line.substr(pos));
		outfile << replacedLine << std::endl;
	}

	// Close files
	infile.close();
	outfile.close();

	// Print summary
	std::cout << "📁 infile -> " << filenameIn << std::endl;
	std::cout << "📁 outfile -> " << filenameOut << std::endl;
	std::cout << "🔁 " << s1 << " -> " << s2 << std::endl;
	std::cout << "🔍 " << nReplaced << " replacement(s)" << std::endl;

	return (0);
}