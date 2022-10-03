#include "main.h"

/**
 * *_strlen - count array
 * @s: array of element
 * Return: 1
 */

int *_strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*count character of string*/
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy array
 * @dest: array destination
 * @src: array of element
 * Return: dest
 */

char _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * *_strdup - array to print a string
 * @str: array of ellement
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (string == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);

	return (dst);
}
