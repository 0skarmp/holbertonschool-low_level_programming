#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - characters upper and lower case
 *
 * Return: zero
 */

int main(void)
{
char oskar, e, q;
e = 'e';
q = 'q';
for (oskar = 'a'; oskar <= 'z'; oskar++)
{
if (oskar != e && oskar != q)
putchar(oskar);
}
putchar('\n');
return (0);
}
