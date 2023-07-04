#include <stddef.h>
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


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	       
	}
}
