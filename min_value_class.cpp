#include "min_value_class.h"
#include <iostream>
#include <fstream>


int MinValue::ShowResult(const std::string& name) {
	std::ifstream file(name);
	if (!file)
	{
		std::cout << "Nothing to count!!!\n";
		return -1;
	}
	/*else
	{
		std::cout << "OK\n\n";
	}*/

	int min;
	int value;
	file >> value;

	while (!file.eof()) {
		file >> min;
		if (min <= value) {
			value = min;
		}
	}
	file.close();
	std::cout << "Minimal value is " << value << std::endl;
	return 0;
};