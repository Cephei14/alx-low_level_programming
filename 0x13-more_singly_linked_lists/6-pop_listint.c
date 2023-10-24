#include "lists.h"

/**
 * pop_listint - function that delete first node and return the node's data
 * @head: the head of the list
 * Return: the data of the first node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (0);
	p = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(p);
	return (n);
}
