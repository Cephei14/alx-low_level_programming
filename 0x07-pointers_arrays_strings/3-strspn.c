#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: string to search in
 *@accept: string that you want to find
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, v, c;

	v = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				v++;
				c = 1;
			}
		}
		if (c == 0)
			return (v);
	}
	return (v);
}
