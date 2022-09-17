#include <stdio.h>
#include "main.h"

/**
 * main - program that print either number
 * or fizz or buzz or fizzbuzz
 *
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf('\n');

	return (0);

}
