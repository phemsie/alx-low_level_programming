#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiply two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (arg > 1 && (arg - 1) == 2)
	{
		for (i = 0; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}