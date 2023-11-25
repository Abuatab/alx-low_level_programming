#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at and index
 * @head: the list to delete from
 * @index: the index of the node to be deleted
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	if (*head == NULL)
		return (-1);

	current = *head;
	previous = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (index > 0)
	{
		previous = current;
		current = current->next;
		index--;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
