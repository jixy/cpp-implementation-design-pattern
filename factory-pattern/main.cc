#include "operation.h"
#include "operationFactory.h"
#include <iostream>


int main()
{
	Operation* oper = OperationFactory::createOperation('-');
	oper->SetNumberA(5.0);
	oper->SetNumberB(10.0);
	double	result = oper->GetResult();
	std::cout << "result : " << result << std::endl;
	delete oper;
	return 0;
}
