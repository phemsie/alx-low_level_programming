#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - print alphabet in lower case
*Description: followed by a new line
*Return: Always 0 (success)
*/
int main(void)

{
	char ch = 'a'

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
		putchar("\n");
	return (0);
}
