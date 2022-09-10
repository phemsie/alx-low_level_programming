#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
	*main - print alphabet in upper and lower case
	*
	* Return: Always 0 (success)
	*/
int main(void)
{
	char (ch);
	char (CH);
	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar (ch);
	for (CH = 'A' ; CH <= 'Z' ; CH++)
		putchar (CH);
		putchar ('\n');
	return (0)
}
