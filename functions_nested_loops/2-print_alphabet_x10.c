#include"main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
*followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int time;
char oskar;
time = 0;
while (time < 10)
{
oskar = "a";
while (oskar <= 'z')
{
_putchar(oskar);
oskar++;
}
_putchar('\n');
time++;
}
}
