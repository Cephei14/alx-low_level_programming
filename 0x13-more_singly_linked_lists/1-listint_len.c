#include "lists.h"

/**
 * listint_len - function that return number of elements in a linked list
 * @h: head of the listed list
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
