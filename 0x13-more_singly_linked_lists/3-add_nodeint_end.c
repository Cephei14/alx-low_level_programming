#include "lists.h"

/**
 * add_nodeint_end - function that add a node in the end fo a linked list
 * @head: the head of the linked list
 * @n: data of the new linked list
 * Return: a pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *p;

	ptr = *head;
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
		*head = p;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = p;
	}
	return (p);
}
