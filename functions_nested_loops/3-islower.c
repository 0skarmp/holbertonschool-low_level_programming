#include"main.h"

/**
* _islowercase - check for lowercase character,
* if c is lowercase print 1, 0 otherwisewise..
*
* Return: 1 if c is lowercase,other wise 0
*/
int _islowercase(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(1);
	}
	else

		_putchar(0);
}
