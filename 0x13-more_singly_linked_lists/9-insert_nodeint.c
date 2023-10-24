#include "lists.h"
size_t listint_len(const listint_t *h);

/**
 * insert_nodeint_at_index - function that insert a node in idx position
 * @head: the head of the linked list
 * @idx: the position desired to insert a new node
 * @n: data of the node
 * Return: a pointer to the new created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *ptr;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	ptr = *head;
	if (idx == 0 || ptr == NULL)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	while (i < idx - 1 && ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	p->next = ptr->next;
	ptr->next = p;
	return (p);
}
