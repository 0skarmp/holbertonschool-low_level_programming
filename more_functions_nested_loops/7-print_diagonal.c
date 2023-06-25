#include "main.h"

/**
 * print_diagonal -  function to print a slash in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('/');
	}
	_putchar('\n');
}
