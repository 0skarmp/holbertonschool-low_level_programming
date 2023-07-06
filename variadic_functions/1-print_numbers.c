#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * Description: This function takes a variable number of arguments
 * representing integers and prints them. It also prints the separator
 * string between numbers, if provided. The numbers are followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ok;
unsigned int i = 0;

va_start(ok, n);

while (i < n)
{
printf("%d", va_arg(ok, int));

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}

i++;
}

va_end(ok);

printf("\n");
}
