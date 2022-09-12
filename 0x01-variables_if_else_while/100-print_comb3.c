#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */



int main(void)

{

		int d;
		int f;

		for (d = 10; d < 19; d++)
		{
			for (f = 10; f <= 19; f++)
			{
				if ((f % 10) > (d % 10))

				{
					putchar((d % 10) + '0');

					putchar((f % 10) + '0');

					if (d != 18 || f != 19)
					{

						putchar(',');

						putchar(' ');


					}


				}

			}


		}
		putchar('\n');

		return (0);

}
