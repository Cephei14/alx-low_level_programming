#include "lists.h"

/**
 * list_len - function that print number of elements in a list
 * @h: head of the list
 * Return: numer of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
