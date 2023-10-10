#include "main.h"

/**
 * _calloc - function that allocate memory for an array
 * @nmemb: number of elements
 * @size: size of array
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);
	if (p == 0)
		return (NULL);
	i = 0;
	while (i < sizeof(int) * nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
