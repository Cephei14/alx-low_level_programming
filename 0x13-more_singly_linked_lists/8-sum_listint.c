#include "lists.h"

/**
 * sum_listint - function that sum all data together
 * @head: the head of the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *p;

	if (head == NULL)
		return (0);
	p = head;
	while (p)
	{
		s += p->n;
		p = p->next;
	}
	return (s);
}
