#include "main.h"

/**
 * create_array - function that create an array of chars
 * @size: size of the array
 * @c: the first character
 * Return: a string
 */

char *create_array(unsigned int size, char c)
{
	char* p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	else
	{
		p = malloc(size);
		if (p == NULL)
			return (NULL);
		else
		{
			for (i = 0; i < size; i++)
				p[i] = c; 
		}
	}
	return (p);
}
