#include"main.h"
/**
 * print_square - show  function to prints  squares,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			_putchar('#');
			_putchar('\n');
		}
	}
       
}
