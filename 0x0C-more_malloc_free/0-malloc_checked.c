#include "main.h"

/**
 * malloc_checked - function that allocate memory
 * @b: size of memory allocated
 * Return: adress of the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
