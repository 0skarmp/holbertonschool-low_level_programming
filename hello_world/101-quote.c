#include <studio.h>

/**
 * main - first 101
 *
 * Description: print
 *
 * Return: one on succes
 */
int main(void)
{
char a[] = "and that piece of art is useful\" - Dora Korpar, 2015^Z-10-19\n";
write(STDERR_FILENO, a, sterlen(a));
return (1);
}
