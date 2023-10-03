#include "main.h"

/**
 *_strchr - a function that locates a character in a string
 *@s: a string
 *@c: character to be found
 *Return: a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		{
			return (s);
		}
return (NULL);
}
