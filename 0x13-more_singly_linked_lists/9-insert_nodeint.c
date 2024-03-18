#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: the list to insert the node to
 * @idx: the index where the node is added
 * @n: integer
 * Return: a pointer to the inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *traverser, *ptr;

	if (*head == NULL)
		return (NULL);
	traverser = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	while (traverser && idx > 1)
	{
		if (traverser == NULL)
			return (NULL);
		traverser = traverser->next;
		idx--;
	}
	ptr->next = traverser->next;
	traverser->next = ptr;
	return (ptr);
}
