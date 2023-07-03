#include"main.h"
/**
 * _print_rev_recursion - printing in reverse the string
 * @s: pointer that will be printing
 *
*/

void _print_rev_recursion(char *s)

{
	int num = 0;

	if (s[num] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[num]);
	}
}
