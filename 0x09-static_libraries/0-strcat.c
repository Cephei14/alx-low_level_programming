#include "main.h"

/**
 * _strcat - function that can concatenate two strings
 *@dest: string to get into
 *@src: string to go from
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *c;

	c = strcat(dest, src);
	return (c);
}
