#include "main.h"

/**
 * _isdigit - A function that checks for isdigit character.
 * @c: An input character
 * Return: 1 if c is digit or 0 otherwise
 */
int _isdigit(int c)
{
char digits = '0';
int sdigit = 0;
for (; digits <= '9'; digits++)
{
if (c == digits)
{
sdigit = 1;
}
}
return (sdigit);
}
