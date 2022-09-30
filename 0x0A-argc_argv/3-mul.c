#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiply two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atol(argv[1]);
	b = atol(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
