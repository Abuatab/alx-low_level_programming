#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at an index
 * @head: the list to get the node from
 * @index: the index of the node
 * Return: a pointer to the node at index
 */

dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *traverser;

	if (head == NULL)
		return (NULL);
	traverser = head;
	while (traverser && index > 0)
	{
		traverser = traverser->next;
		if (traverser == NULL)
			return (NULL);
		index--;
	}
	return (traverser);
}
