#include "main.h"

/**
 * _realloc - function that reallocate a memory
 * @ptr: old pointer
 * @old_size: old allocated size with ptr
 * @new_size: the size that going to be allocated
 * Return: a pointer to the nes allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		p = ptr;
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (new_size == 0)
		return (NULL);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	p = ptr;
	return (p);
}
