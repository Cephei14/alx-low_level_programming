#include "lists.h"

/**
 * add_node - function that add a node in the beginning of the linked list
 * @head: head of the list
 * @str: string of the list
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *N;

	N = malloc(sizeof(list_t));
	if (N == NULL)
		return (NULL);
	N->str = strdup(str);
	N->len = strlen(str);
	N->next = *head;
	*head = N;
	return (N);
}
