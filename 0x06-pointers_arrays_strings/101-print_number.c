#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
			_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
