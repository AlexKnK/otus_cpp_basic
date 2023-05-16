#include "std_value_class.h"
#include <iostream>
#include <fstream>
#include <cmath>




int StdValue::ShowResult(const std::string& name) {
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
	int digit = 0;
	int mean = 0;
	int power = 0;

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

	mean = sum * 1.0 / counter;
	sum = 0;

	file.open(name);

	while (!file.eof()) {
		file >> digit;
		power = pow((digit - mean), 2);
		if (file.eof()) {
			break;
		}
		else {
			sum += power;
		}
	}
	file.close();

	std::cout << "Std value is " << sqrt(sum * 1.0 / (counter - 1)) << std::endl;
	return 0;
};
