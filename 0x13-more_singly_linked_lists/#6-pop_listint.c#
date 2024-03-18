#include "lists.h"

/**
 * pop_listint - pops the head node from the list
 * @head: the list to pop the node from
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = NULL;
	*head = tmp;
	return (n);
}
