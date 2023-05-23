#pragma once

class Mean : public IStatistics {
public:
	Mean() : 
		m_mean{ 0 },
		m_counter{ 0 } {
	}

	void update(double next) override;

	double eval() const override;

	const char* name() const override;

	
private:
	double m_mean;
	int m_counter;
};