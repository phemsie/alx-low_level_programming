#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory
 * @b: character to be used
 * @n: size of memory area
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
