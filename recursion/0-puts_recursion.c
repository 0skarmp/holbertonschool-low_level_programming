#include"main.h"
/**
 * _puts_recursion - prints a string, followe in a new line
 * @si: pointer that wil be printer
 *
 *
 */
void _puts_recursion(char *si)
{
	if (*si != '\0')
	{
	_putchar(*si);
	_puts_recursion(si + 1);
	}
	else
	{
	_putchar('\n');
	}
}
