#include "operationFactory.h"

Operation *
OperationFactory::createOperation(char ch)
{
	switch (ch)
	{
		case '+':
				return	new OperationAdd();
		case '-':
				return	new OperationSub();
		case '*':
				return	new OperationMul();
		case '/':
				return	new OperationDiv();
	}
}
