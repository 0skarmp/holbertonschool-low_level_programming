#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - counter the size
 * @array:first parameter
 * @size: second parameter
 * @action: third parameter
 * Return: nothing
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	i = 0;
	while (i < size)
		i++;
	{
		action(array[i]);
	}
}
