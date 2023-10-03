#include "main.h"

/**
 *_strcpy - it's a function that copy strings
 *@dest: destination to copy
 *@src:source of copy
 *Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
