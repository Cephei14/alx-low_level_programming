#include "lists.h"

/**
 * add_node_end - function that add a node in the end of a linked list
 * @head: head of the list
 * @str: string
 * Return: new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *N, *C;

	N = malloc(sizeof(list_t));
	if (N == NULL)
		return (NULL);
	N->str = strdup(str);
	N->len = strlen(str);
	C = *head;
	if (*head == NULL)
		*head = N;
	else
	{
		while (C->next != NULL)
		{
			C = C->next;
		}
		C->next = N;
	}
	return (N);
}
