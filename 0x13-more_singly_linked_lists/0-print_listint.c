#include "lists.h"

/**
 * print_listint - Prints the list
 * @h: The list to be printed
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
