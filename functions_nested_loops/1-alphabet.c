#include "main.h"
/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
char oskar = 'a';

while (oskar <= 'z')
{
_putchar(oskar);
oskar++;
}
_putchar('\n');
}
