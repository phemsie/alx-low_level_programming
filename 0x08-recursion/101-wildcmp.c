#include "main.h"

/**
 * wildcmp - compare two striing and return 1 if identical
 * @s1: string to be checked
 * @s2: pattern to be used
 *
 * Return: 1 if identical or 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 2));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' & wildcmp(s1 + 1, s2)));
	return (0);
}
