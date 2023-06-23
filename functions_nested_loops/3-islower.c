#include"main.h"

/**
* main - print in lowercase
*
* Description: print _islowercase - if c is lowercase, 0 otherwise,
* followed by a new line.
*
* Return: 1 if c is lowercase,other wise 0.
*/
int _islowercase(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
