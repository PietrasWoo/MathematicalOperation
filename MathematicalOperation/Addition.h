#pragma once
#include "AbstractMathematicalOperation.h"

class Addition : public AbstractMathematicalOperation
{
	const std::string CLASS_NAME{ "Addition" };

	std::string Proceed(int num1, int num2) override;
	std::string GetClassName() override;
};

