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

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (num == 100)
		{
			break;
		}
		else
			printf(" ");
	}
	printf('\n');
	return (0);

}
