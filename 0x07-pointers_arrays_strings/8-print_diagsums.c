#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two digonals
 * @a: square matrix of which w print the dagonals
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(i * size) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%i, %i\n", sum, sum1);
}
