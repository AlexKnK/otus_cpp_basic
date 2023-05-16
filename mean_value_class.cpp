#include "mean_value_class.h"
#include <iostream>
#include <fstream>


int MeanValue::ShowResult(const std::string& name) {
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

	int sum = 0;
	int counter = 0;


	while (!file.eof()) {
		int digit = 0;
		file >> digit;
		sum += digit;
		if (file.eof()) {
			break;
		}
		else {
			counter++;
		}
	}
	file.close();

	std::cout << "Mean value is " << sum * 1.0 / counter << std::endl;
	return 0;
};