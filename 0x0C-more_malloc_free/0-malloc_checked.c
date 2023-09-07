#include "main.h"

/**
 * malloc_checked - function that allocate memory using pointer
 * @b: nb of bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *poi;

	poi = malloc(b);
	if (poi == NULL)
	{
		exit(98);
	}
	return (poi);
}
