#include "lists.h"

/**
 * sum_dlistint - funtion that sum all data
 * @head: head of the lilist
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int r;

	r = 0;
	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		r = r + tmp->n;
		tmp = tmp->next;
	}
	return (r);
}
