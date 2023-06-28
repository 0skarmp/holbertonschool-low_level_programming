#include"main.h"
#include<stdio.h>

/**
 * main - print the name of the program
 * @argc: argunment count
 * @argv: argument vector
 * main - firs printing
 * Description : print in the screen
 * Return: zero on success
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
