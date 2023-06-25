#include "main.h"

/**
   * more_numbers -  function to prints 10 times the numbers, from 0 to 14,
   * followed by a new line.
   * Return: Always 0
 */
void more_numbers(void)
{
	int oskar, morales = 0;

	for (; morales < 10; morales++)
	{
		for (oskar = 0; oskar <= 14; oskar++)
		{
			if (oskar > 9)
				_putchar(oskar / 10 + '0');

			_putchar(oskar % 10 + '0');
		}
		_putchar('\n');
	}
}

