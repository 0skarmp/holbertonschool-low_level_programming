#include <stdio.h>
/**
 * main - printing numbers from 0 to 9
 * Description: using the main function
 * this program prints numbers form 0 to 9
 * Return: 0
 */
int main(void)
{
int w;
for (w = '0'; w <= '9'; w++)
{
putchar(w);
if (w != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
