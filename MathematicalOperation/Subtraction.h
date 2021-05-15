#pragma once
#include "AbstractMathematicalOperation.h"
class Subtraction : public AbstractMathematicalOperation
{
	const std::string CLASS_NAME{ "Subtraction" };

	std::string Proceed(int num1, int num2) override;
	std::string GetClassName() override;
};

