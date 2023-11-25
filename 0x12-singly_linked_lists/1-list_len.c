#include "lists.h"

/**
 * list_len - measures the length of the list
 * @h: The list to measure
 * Return: The length of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
