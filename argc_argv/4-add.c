#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int i = 1, alm;
	int add = 0;

	while (argc > i)
	{
		alm = 0;
		while (argv[i][alm])
		{
			if (argv[i][alm] < 48 || argv[i][alm] > 57)
			{
				printf("Error\n");
				return (1);
			}
			alm++;

		}
		add = add + atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
