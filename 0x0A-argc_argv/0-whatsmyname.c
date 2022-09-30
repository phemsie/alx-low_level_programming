#include <stdio.h>

/**
 * main - print its name follow by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	printf("This program was called with \"%s\"\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
		else
		{
			printf("The command line has no othe argument\n");
		}
	}
	return (0);
}
