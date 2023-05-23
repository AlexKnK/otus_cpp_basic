#include <iostream>
#include <limits>
#include <cmath>

#include "statistics_class.h"
#include "std_class.h"


void Std::update(double next) {
	m_value.push_back(next);
	m_counter++;
}

double Std::eval() const {
	double temp = 0;
	double mean = 0;
	double p_temp = 0;
	for (double i : m_value) {
		temp += i;
	}

	mean = temp / m_counter;
	temp = 0;

	for (double i : m_value) {
		temp += std::pow((i - mean),2);
	}
	p_temp = temp / (m_counter - 1);

	return sqrt(p_temp);
}

const char* Std::name() const {
	return "std";
}