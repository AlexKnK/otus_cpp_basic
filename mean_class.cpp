#include <iostream>
#include <limits>

#include "statistics_class.h"
#include "mean_class.h"


void Mean::update(double next) {
	m_mean += next;
	m_counter++;
}

double Mean::eval() const {
	return m_mean / m_counter;
}

const char* Mean::name() const {
	return "mean";
}