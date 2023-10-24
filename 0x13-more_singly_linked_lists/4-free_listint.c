#include "lists.h"

/**
 * free_listint - function that free a list
 * @head: head of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
