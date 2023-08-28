#include "main.h"

/**
 * _memset - function that fill a certain memory
 * @s: area pointed where it will start filling
 * @b: the value to be filled with
 * @n: size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
