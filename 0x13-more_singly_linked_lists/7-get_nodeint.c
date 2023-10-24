#include "lists.h"

/**
 * get_nodeint_at_index - function that return a node at a specific  index
 * @head: the head of the linked list
 * @index: number of the node
 * Return: pointer to the node at the index i
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p = head;
	while (i <= index)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
		return (NULL);
	return (p);
}
