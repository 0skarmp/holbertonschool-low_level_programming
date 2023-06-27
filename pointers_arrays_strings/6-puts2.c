#include"main.h"

/**
 * puts- prints one char out of 2 strings
 * followed by new line
 *@str: string to print the chars
 *
 *
*/

void puts2(char *str)
{

int y, alm, i;

	y = 0;

	while (str[y] != 0)
	{
		y++;
	}

	alm = y - 1;

	for (i = 0; i < alm; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar ('\n');
}
