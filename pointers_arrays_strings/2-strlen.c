#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{

int o;

o = 0;

	while (s[o] != '\0')
	{
	o++;
	}
	return (o);
}
