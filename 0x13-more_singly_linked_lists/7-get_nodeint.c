#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at an index
 * @head: the list to get the node from
 * @index: the index of the node
 * Return: a pointer to the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverser;

	if (head == NULL)
		return (NULL);
	traverser = head;
	while (index > 0)
	{
		traverser = traverser->next;
		index--;
	}
	return (traverser);
}
