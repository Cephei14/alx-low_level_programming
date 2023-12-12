#include "main.h"
#include <stddef.h>

/**
 *_strstr - it locates a substring
 *@haystack: where to search
 *@needle: what i want to find
 *Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack, *y = needle;

		while (*y != '\0' && *x == *y)
		{
			x++;
			y++;
		}
		if (*y == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
