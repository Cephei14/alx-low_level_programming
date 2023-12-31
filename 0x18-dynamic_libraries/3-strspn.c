#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: string to search in
 *@accept: string that you want to find
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				l = 1;
			}
		}
		if (l == 0)
			return (k);
	}
	return (k);
}
