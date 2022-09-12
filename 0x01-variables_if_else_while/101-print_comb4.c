#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - print triple combos
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int i;
	int j;
	int k;

	for (i = 0; i <= 0; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
			if (k >	j && j > i)
			{

			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			putchar(k % 10 + '0');
			if (i != 7 || j != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
			}

		}

	}
	putchar('\n');
	return (0);

}
