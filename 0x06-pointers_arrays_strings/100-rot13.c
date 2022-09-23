#inclue "main.h"

/**
 * rot13 - encode a string in rot13
 * @s: string to be encoded
 *
 * Return: the reulting string
 */

char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; (s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}

