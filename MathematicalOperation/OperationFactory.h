#pragma once
#include "AbstractMathematicalOperation.h"
#include "OperationEnum.h"

class OperationFactory
{
public:
	static std::unique_ptr<AbstractMathematicalOperation> create(Operation operation);
};

