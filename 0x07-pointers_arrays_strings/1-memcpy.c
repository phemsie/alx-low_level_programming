#include "main.h"

/**
 * *_memcpy - function that copy memory area
 * @dest: memory area to be copied to
 * @src: memory are to copy
 * @n: no of bytes to copy
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
