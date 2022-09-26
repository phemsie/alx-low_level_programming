#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function tha locate character in a string
 * @s: string to search
 * @c: character to locate
 *
 * Return: return pointer to spot in s with c or null
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
