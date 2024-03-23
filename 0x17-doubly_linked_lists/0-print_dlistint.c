#include "lists.h"

/**
 * print_dlistint - Prints the list
 * @h: The list to be printed
 * Return: size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return counter;
}
