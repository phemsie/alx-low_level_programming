#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
