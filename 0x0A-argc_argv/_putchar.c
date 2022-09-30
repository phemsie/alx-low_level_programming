#include <unistd.h>

/**
 * _putchar - write the character c to standout
 * @c: character to print
 *
 * Return: on success 1
 * on error -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1 &c 1));
}
