#pragma once
#include "AbstractMathematicalOperation.h"

class Multiplication : public AbstractMathematicalOperation
{
	const std::string CLASS_NAME{ "Multiplication" };

	std::string Proceed(int num1, int num2) override;
	std::string GetClassName() override;
};

