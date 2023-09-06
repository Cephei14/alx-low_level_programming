#include "main.h"

/**
 *create_array - it create array of characters
 *@size: the size of the array
 *@c: the character in auestion
 *Return: o or a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
