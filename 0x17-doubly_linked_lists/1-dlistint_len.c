#include "lists.h"

/**
 * dlistint_len - measures the length of the list
 * @h: the list to measure
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
