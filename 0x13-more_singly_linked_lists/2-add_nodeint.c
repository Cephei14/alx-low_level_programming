#include "lists.h"

/**
 * add_nodeint - funtion that add a node in the beggining of a linked list
 * @head: the head of the linked list
 * @n: the value of data in the new created node
 * Return: a pointer to the new node o NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
