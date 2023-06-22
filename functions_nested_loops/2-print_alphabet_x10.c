#include"main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
*followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int time = 0;
char oskar = 'a';
while (time < 10)
{
while (oskar <= 'z')
{
_putchar(oskar);
oskar++;
}
_putchar('\n');
 time++;
}
}
