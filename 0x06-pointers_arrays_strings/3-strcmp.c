#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return less than zero if s1 is less than s2, 0 if
 * equal and more than zero if s1 is more than s2
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0, i = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break
		else if s1[i] == '\0'
		{
			result = s2[i];
			break;
		}
		else if s2[i] == '\0'
		{
			result = s1[i];
			break;
		}
		else if s1[i] != s2[i]
		{
			result = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (result);
}
