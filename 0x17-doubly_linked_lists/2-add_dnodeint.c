#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning
 * @head: The list to add the node to
 * @n: integer
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
