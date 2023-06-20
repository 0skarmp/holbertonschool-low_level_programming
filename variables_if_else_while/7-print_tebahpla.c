#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print characters with putchar
 *
 * Return: zero
 */

int main(void)
{
char oskar;
for (oskar = 'z'; oskar >= 'a'; oskar--)
putchar(oskar);
putchar('\n');
return (0);
}
