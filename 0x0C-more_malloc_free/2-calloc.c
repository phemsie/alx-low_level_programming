#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array, using malloc
 * @nmemb: number of element in the array
 * @size: size of element in the array
 *
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
