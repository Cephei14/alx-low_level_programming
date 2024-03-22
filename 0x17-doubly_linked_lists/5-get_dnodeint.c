#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node of a Llist
 * @head: head of the Llist
 * @index: the index wanted
 * Return: a node adress
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}
