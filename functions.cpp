#include "functions.h"
#include <iostream>
#include <fstream>


void GetValues(const std::string& name) {

	std::ofstream file(name, std::ios::out);

	while (!std::cin.eof()) {
		int digit;

		std::cin >> digit;

		if (!std::cin.eof() && !std::cin.good()) {
			std::cerr << "Invalid input data\n";
			file.close();
			remove("buffer.txt");
			break;
		}
		else if (std::cin.eof()) {
			file.close();
		}
		else {
			file << digit << "\n";
		}

	}
}