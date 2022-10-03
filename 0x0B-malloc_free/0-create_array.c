#include "main.h"

/**
 * *create_array - create an array of characters
 * @size: no of element array
 * @c: character
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	/*buffer value with malloc*/

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
	}
	while (postion < size) /*while for array*/
	{
		*(buffer + position) = c;
		position++;
	}
	return (buffer);
}
