#include <stdio.h>
#include "main.h"

/**
 * main - print number of argument passed
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	
	return (0);
}
