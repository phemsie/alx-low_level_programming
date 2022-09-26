#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be considered
 * @accept: string containing the bytes to search for
 *
 * Return: pointer to the bytes in s that matches one of the bytes in accept
 * or NULL is no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
