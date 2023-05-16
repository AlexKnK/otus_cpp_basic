#pragma once
#include <string>

class Statistics {
public:
	virtual ~Statistics() {}

	virtual int ShowResult(const std::string& name) = 0;
};
