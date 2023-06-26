#include "main.h"

/**
 * print_triangle - Prints a triangle.
 *
 * @n: int
 *
 * Return: int.
 */
void print_triangle(int n)
{
int a, b;

if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (b = n - a; b > 0; b--)
_putchar(' ');

for (b = 0; b < a; b++)
_putchar('#');

if (a == n)
continue;

_putchar('\n');
}
}

_putchar('\n');
}
