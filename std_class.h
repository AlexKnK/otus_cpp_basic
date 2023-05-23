#pragma once
#include <vector>

class Std : public IStatistics {
public:
	Std() :
		m_std{ 0 },
		m_counter{ 0 }{
	}

	void update(double next) override;

	double eval() const override;

	const char* name() const override;


private:
	double m_std;
	int m_counter;
	std::vector<double> m_value;
};