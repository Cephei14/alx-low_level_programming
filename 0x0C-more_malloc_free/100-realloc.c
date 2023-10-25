#include "main.h"
#include <string.h>

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

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
	}
	else if (new_size <= old_size)
	{
		p = ptr;
	} else
	{
		p = malloc(new_size);
		if (p != NULL)
		{
			memcpy(p, ptr, old_size);
			free(ptr);
		}
	}
	return (p);
}
