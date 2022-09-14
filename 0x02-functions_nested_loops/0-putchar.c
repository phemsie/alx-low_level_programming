#include <stdio.h>
#include<stlib.h>


/**
 *main - print _putchar as a message
 *
 *Return: Always (0) success
 */
int main(void)
{
	int str[] = {94, 22, 45, 99, 112, 116, 98, 87};
	int count, ch;
ch = sizeof(str) / sizeof(int);
	for (count = 0; count < ch; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
