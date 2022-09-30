#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * main - program that add positive itegers
 * @argc: argument counter
 * @argv: argument vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 0)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}