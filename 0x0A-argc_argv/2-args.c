#include <stdio.h>

/**
 * main - print all arguments it receive
 * @argc: argument counter
 * @argv: argument vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
