#include "main.h"
/**
*_strlen - give back the lenght of the string
*@s: string to evaluate the character
*return: (o) lenght of the string
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
