#include <iostream>
#include <fstream>
#include "statistics_class.h"
#include "max_value_class.h"

int MaxValue :: ShowResult(const std::string& name) {
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

	int max;
	int value;
	file >> value;

	while (!file.eof()) {
		file >> max;
		if (max >= value) {
			value = max;
		}
	}
	file.close();
	std::cout << "Maximal value is " << value << std::endl;
	return 0;
};