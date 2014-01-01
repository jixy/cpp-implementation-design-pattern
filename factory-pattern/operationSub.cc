#include "operationSub.h"
double
OperationSub::GetResult () const
{
	double	num1 = GetNumberA ();
	double	num2 = GetNumberB ();
	return	num1 - num2 ;
}
