#include "Multiplication.h"

std::string Multiplication::Proceed(int num1, int num2)
{
	std::ostringstream ret;
	ret << num1 << " * " << num2 << " = " << num1 * num2;
	return ret.str();
}

std::string Multiplication::GetClassName()
{
	return CLASS_NAME;
}
