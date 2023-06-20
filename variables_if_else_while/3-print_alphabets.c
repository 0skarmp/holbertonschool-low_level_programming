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
for (oskar = 'a'; oskar <= 'z'; oskar++)
putchar(oskar);
for (oskar = 'A'; oskar <= 'Z'; oskar++)
putchar(oskar);
putchar('\n');
return (0);
}
