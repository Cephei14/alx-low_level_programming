#include "lists.h"

/**
 * add_dnodeint_end - function that add a node at the end of a linked list
 * @head: head of the linked list
 * @n: the data
 * Return: New node's adress or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;
       
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
