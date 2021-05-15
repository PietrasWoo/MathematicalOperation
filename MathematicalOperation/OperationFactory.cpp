#include "OperationFactory.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"

std::unique_ptr<AbstractMathematicalOperation> OperationFactory::create(Operation operation)
{
	if (operation == ADDITION)			return std::make_unique<Addition>();
	if (operation == SUBTRACTION)		return std::make_unique<Subtraction>();
	if (operation == MULTIPLICATION)	return std::make_unique<Multiplication>();

	return nullptr;
}
