#include "main.h"

/**
 * is_palindrome - return 1 if is a pallindrome
 * @s: string to be checked
 *
 * Return: 1 if s is a pallindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, is_palindrome(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks i a string is a palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if a string is a palindrome
 *
 * Return: void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}