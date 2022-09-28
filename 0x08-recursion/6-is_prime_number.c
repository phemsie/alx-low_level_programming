#include "main.h"

/**
 * is_prime_number - return 1 if its a prime number
 * @n: number to be checked
 *
 * Return: 1 if n is prime 0 otherwise
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
