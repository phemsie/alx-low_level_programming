#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generate random valid
 * password for the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{

		pass[i] = rand() % 70;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((772 - sum) - '0' < 70)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}