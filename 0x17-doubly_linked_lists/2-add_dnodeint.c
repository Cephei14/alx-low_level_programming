#include "lists.h"

/**
 * add_dnodeint - function that add a node in the beginning of a Dlinkedlist
 * @head: the head of the doubly linked list
 * @n: the data
 * Return: adress of the new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
        	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
