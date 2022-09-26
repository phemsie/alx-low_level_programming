#include "main.h"

/**
 * _strspn - function that gets the prefix substring
 * @s: string to evaluate
 * @accept: string containing list of characters to match in s
 *
 * Return: the no of bytes in the initial segment
 * of s which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
