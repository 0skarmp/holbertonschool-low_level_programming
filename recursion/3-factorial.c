#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: first parameter
 * Return: the factoial if 'n' is lower -1 otherwise 1
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n > 1)

	{
	return (1);
	}

	return (n * factorial(n - 1));
}

