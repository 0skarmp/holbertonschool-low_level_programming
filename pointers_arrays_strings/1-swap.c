#include "main.h"
/**
*swap_int - swap the value of the variable
* pointer points to  to 98
*@a: pointer to swap the value of the variable to b
*@b: pointer to swap the value of the variable to a
*return: Alaways 0 (succes)
*/

void swap_int(int *a, int *b)
{
	int z;
		z = *a;
		*a = *b;
		*b = z;
}
