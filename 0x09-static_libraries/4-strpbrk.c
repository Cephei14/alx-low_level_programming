#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - it searches a string for any of a set of bytes
 *@accept: string to find
 *@s: where to search
 *Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
