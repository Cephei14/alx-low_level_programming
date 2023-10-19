#include "lists.h"

/**
 * free_list - function that free a list
 * @head: head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *F;

	while (head != NULL)
	{
		F = head;
		head = head->next;
		free(F->str);
		free(F);
	}
}
