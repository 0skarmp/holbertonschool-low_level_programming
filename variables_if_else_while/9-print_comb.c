#include <stdio.h>
/**
 * main - printing numbers from 0 to 9
 * Description: using the main function
 * this program prints numbers form 0 to 9
 * Return: 0
 */
int main(void)
{
char oskar;
for (oskar = '0'; oskar <= '9'; oskar++)
{
putchar(oskar);
if (oskar != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
