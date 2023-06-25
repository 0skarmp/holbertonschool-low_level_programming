#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
int oskar;
for (oskar = '0'; oskar <= '9'; oskar++)
_putchar(oskar);
_putchar('\n');
}
