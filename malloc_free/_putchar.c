/**
 * _putchar - writes the character c to stdout
11;rgb:0000/0000/0000 * @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
  return (write(1, &c, 1));
}
