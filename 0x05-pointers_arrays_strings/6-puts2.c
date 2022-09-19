#include "main.h"

/**
 * puts2 - print one character out of 2 of a string
 * followed by a new line
 * @str: string to print the char from
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
