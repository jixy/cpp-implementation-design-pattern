#include "operationMul.h"
double
OperationMul::GetResult () const
{
	double	num1 = GetNumberA ();
	double	num2 = GetNumberB ();
	return	num1 * num2 ;
}
