#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates character in a string
 * @s: string to check
 * @c: character to be located
 *
 * return: return to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
