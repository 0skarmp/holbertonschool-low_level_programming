#include "main.h"

/**
 * Print-number: print the numbers from 0 to 9 in a new line.
 * @oskar have a value 0
 * @void value of variable
 * Return: always zero
 */

void print_numbers(void)
{
int oskar;
for (oskar = '0'; oskar <= '9'; oskar++)
_putchar(oskar);
_putchar('\n');
}
