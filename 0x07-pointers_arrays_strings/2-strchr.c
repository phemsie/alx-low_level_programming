#include "main.h"

/**
 * *_strchr - function that locates character in a string
 * @s: string to check
 * @c: character to be located
 *
 * return: return to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
