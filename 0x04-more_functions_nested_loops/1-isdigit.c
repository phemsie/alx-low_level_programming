#include <stdio.h>
include "main.h"

/**
 * _isdigit - check if character is a digit
 * @c: character to be checked
 * Return: 1 if is a digit, otherwise return 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
