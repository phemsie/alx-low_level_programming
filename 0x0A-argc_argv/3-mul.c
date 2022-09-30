#include <stdio.h>
#include "main.h"

/**
 * main - program that multiply two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
	a = atol(argv[1]);
	b = atol(argv[2]);

	printf("%d\n", a * b);
	return (0);
	}
	printf("Error\n");
	return (1);
}
