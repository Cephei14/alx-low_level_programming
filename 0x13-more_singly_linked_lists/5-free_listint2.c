#include "lists.h"

/**
 * free_listint2 - function that free everything
 * @head: head of the linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	free(*head);
	*head = NULL;
}
