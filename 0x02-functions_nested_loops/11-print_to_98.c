#include <stdio.h>

/**
 * print_to_98 - print all natural numberfrominput to 98
 * in order separated by a commafollowed by a space
 * @n: The number to begin counting at
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d,", n--);
		printf("%d,", n);
	}
	else
	{
		while (n < 98)
			printf("%d,", n++);
		printf("%d,", n);
	}

}
