#include <iostream>
#include <limits>

#include "statistics_class.h"
#include "min_class.h"
#include "max_class.h"
#include "mean_class.h"
#include "std_class.h"

int main() {

	const size_t statistics_count = 4;
	IStatistics* statistics[statistics_count];

	statistics[0] = new Min{};
	statistics[1] = new Max{};
	statistics[2] = new Mean{};
	statistics[3] = new Std{};

	double val = -1;
	while (std::cin >> val) {
		for (size_t i = 0; i < statistics_count; ++i) {
			statistics[i]->update(val);
		}
	}

	// Handle invalid input data
	if (!std::cin.eof() && !std::cin.good()) {
		std::cerr << "Invalid input data\n";
		return 1;
	}
	

	// Print results if any
	for (size_t i = 0; i < statistics_count; ++i) {
		if (std::cin.eof() && val == -1) {
			std::cout << "No data for " << statistics[i]->name() << "!!\n";
		} else {	
		std::cout << statistics[i]->name() << " = " << statistics[i]->eval() << std::endl;
		}
	}


	// Clear memory - delete all objects created by new
	for (size_t i = 0; i < statistics_count; ++i) {
		delete statistics[i];
	}

	return 0;
}