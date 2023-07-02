#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - prints the result of the multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: if get two arguments print zero, otherwise one
 */
int main(int argc, char *argv[])

{
	int x, y;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
return (0);
}
