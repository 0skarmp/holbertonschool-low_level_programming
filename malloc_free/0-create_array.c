#include "main.h"
#include <stdlib.h>

/**
 * _strdup - give back a pointer to an space just assigned to the memory
 * @str: text string
 * Return:  pointer to be the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int n = 0;
	char *y = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
		i++;

	if (y == NULL)
		return (NULL);

	while (str[n])
	{
		y[n] = str[n];
		n++;
	}

	y[n + 1] = 0;
	return (y);
}
