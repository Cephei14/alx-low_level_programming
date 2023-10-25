#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete a node at position index
 * @head: the head of the list
 * @index: the position we want to delete
 * Return: 1 if sucess or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c, i = 0;
	listint_t *dp, *up;

	c = listint_len(*head);
	if (*head == NULL || index > c)
		return (-1);
	if (*head == NULL && index != 0)
		return (-1);
	dp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(dp);
		return (1);
	}
	if (index == c)
	{
		while (dp->next)
		{
			up = dp;
			dp = dp->next;
		}
		up->next = NULL;
		free(dp);
		return (1);
	}
	while (i < index)
	{
		up = dp;
		dp = dp->next;
		i++;
	}
	up->next = dp->next;
	free(dp);
	return (1);
}

/**
 * listint_len - function that return number of elements in a linked list
 * @h: head of the listed list
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
