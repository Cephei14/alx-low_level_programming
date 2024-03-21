#include "lists.h"

/**
 * print_dlistint - print the data in all nodes
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int c;

	c = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
