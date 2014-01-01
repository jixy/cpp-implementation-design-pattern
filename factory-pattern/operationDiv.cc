#include "operationDiv.h"
double
OperationDiv::GetResult () const
{
	double	num1 = GetNumberA ();
	double	num2 = GetNumberB ();
	if (num2 == 0)
			return 0.0;
	return	num1 / num2 ;
}
