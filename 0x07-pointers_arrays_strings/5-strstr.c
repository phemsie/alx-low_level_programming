#include "main.h"
#include <stdio.h>

/**
 * *_strstr - functiion that locate a substring
 * @haystack: string to search in
 * @needle: subbstring to look for
 * Return: pointer to the beginning of the located substring
 * or null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;

		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
