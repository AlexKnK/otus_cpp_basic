#include <iostream>
#include <fstream>


#include "functions.h"
#include "min_value_class.h"
#include "max_value_class.h"
#include "mean_value_class.h"
#include "std_value_class.h"


int main() {
	std::string name = "buffer.txt";
	MinValue min;
	MaxValue max;
	MeanValue mean;
	StdValue std;
	
	GetValues(name);
	
	min.ShowResult(name);
	max.ShowResult(name);
	mean.ShowResult(name);
	std.ShowResult(name);

	remove("buffer.txt");

	std::cout << "\nFinish!" << std::endl;
	return 0;
}