#include "lists.h"

/**
 * sum_listint - sums the n value of the list
 * @head: the list
 * Return: the sum of all the data(n)
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
