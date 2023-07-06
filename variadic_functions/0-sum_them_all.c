#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - plus all of the varibles numbers
 * @n: numbers of the variables
 * Return: the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int save = 0;
unsigned int i;
int addition;

va_start(ap, n);
addition = 0;
i = 0;

while (i < n)
{
save = va_arg(ap, int);
addition = addition + save;
i++;
}
va_end(ap);

return (addition);
}
