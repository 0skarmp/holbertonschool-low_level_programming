#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
  int i = 0, s;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar(92);
	}
       for (s = '0'; s < n; s++)
_putchar(92);
       _putchar(' ');
_putchar('\n');
}
