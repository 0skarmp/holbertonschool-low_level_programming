#include <unistd.h>
#include <string.h>
/**
 * main - first 101
 *
 * Description: write a C program to print specific text with standar error
 *
 * Return: one on succes
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = strlen(msg);
write(STDERR_FILENO, msg, len);
return (1);
}
