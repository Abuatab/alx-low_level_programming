#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: the list to add the node to
 * @n: integer
 * Return: a pointer to the head of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *last;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
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
	return (*head);
}
