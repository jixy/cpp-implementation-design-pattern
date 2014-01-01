#ifndef _OPERATIONFACTORY_HEAD
#define _OPERATIONFACTORY_HEAD
#include "operation.h"
#include "operationAdd.h"
#include "operationSub.h"
#include "operationMul.h"
#include "operationDiv.h"
class OperationFactory
{
	public:
			static Operation*  createOperation(char ch);

};
#endif
