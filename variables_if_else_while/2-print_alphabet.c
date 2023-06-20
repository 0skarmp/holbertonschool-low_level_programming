#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print character
 *
 * Return: zero
 */

int main(void)
{
char oskar;

 for (oskar = 'a'; oskar <= 'z'; oskar++)
   {
     putchar(oskar);
   }
 putchar('\n');

 return (0);
}
