#pragma once
#include <string>
#include <sstream>

class AbstractMathematicalOperation {
public:
	virtual std::string Proceed(int num1, int num2) = 0;
	virtual std::string GetClassName() = 0;
};