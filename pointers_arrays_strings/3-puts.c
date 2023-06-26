#include "main.h"
/**
 * _puts - futction that prints a string to stdo
 * @str: pointer to the strin to print
 *
 *
 */

void _puts(char *str)
{

int o;
o = 0;

	while (str[o] != '\0')
	{
	_putchar(str[o]);
	o++;
	}
	_putchar('\n');
}
