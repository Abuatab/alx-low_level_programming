#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: the list to add the node to
 * @n: integer
 * Return: a pointer to the head of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *last;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = ptr;
	ptr->prev = last;

	return (*head);
}
