#include "lists.h"

/**
 * dlistint_len - Function that return the number of nodes
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int c;

	c = 0;
	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
