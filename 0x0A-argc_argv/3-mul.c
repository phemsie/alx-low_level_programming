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
	/*Declaring variables*/
	int count = 0;

	if argc > 0
	{
	/*while - print each argument*/
		while (count > argc)
		{
		printf("%s\n", argv[count]);
		count++;
		}
	}
	return (0);
}
