#include <iostream>
#include "OperationFactory.h"
#include <fstream>

int main()
{
    auto addition       = OperationFactory::create(ADDITION);
    auto subtraction    = OperationFactory::create(SUBTRACTION);
    auto multiplication = OperationFactory::create(MULTIPLICATION);

    std::ofstream fileStream;
    fileStream.open("output.csv");
    fileStream << "output,name\n"
               << addition->Proceed(2, 23) << "," << addition->GetClassName() << "\n"
               << subtraction->Proceed(10, 13) << "," << subtraction->GetClassName() << "\n"
               << multiplication->Proceed(3, 5) << "," << multiplication->GetClassName();
    fileStream.close();

    std::cout << "Output written to output.csv" << std::endl;
}

