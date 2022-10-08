#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * numLength - returns the length of string
 * @num: operand number
 * Return: number of digits
 */

int numLength(int num)
{
	int Length = 0;

	if (!num)
	{
	return (1);
	}
	while (num)
	{
		num = num / 10;
		Length += 1;
	}

	return (Length);
}
