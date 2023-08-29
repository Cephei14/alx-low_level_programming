#include "main.h"

/**
 *_strchr - a function that locates a character in a string
 *@s: a string
 *@c: character to be found
 *Return: a pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
