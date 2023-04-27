#include <iostream>
#include <fstream>
#include "functions.h"


int main(int argc, char* argv[]) {
	

	system("chcp 1251");
	system("cls");
	
	std::string file_name = "highscore.txt";
	int level = 100;

	// Argument checker

	for (int i = 1; i < argc; i++) {
		if (std::string(argv[i]) == "-table") {

			ReadFromFile(file_name);
			return 0;
		}
		else if (std::string(argv[i]) == "-max") {
			int parameter_value = 0;
			if (argc < 3) {
				std::cout << "Wrong usage! The argument '-parameter' requires some value!" << std::endl;
				return -1;
			}
			parameter_value = std::stoi(argv[2]);
			level = parameter_value;
			std::cout << "You choose level = " << parameter_value << ", nice!!" << std::endl;
		}
	}
	
	std::string name = WhatsYourName();
	
	int number = RandomValue(level);
	int score = LetsPlay(number);

	WriteToFile(file_name, name, score);
	ReadFromFile(file_name);
	
	return 0;
}