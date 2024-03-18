#include "lists.h"

/**
 * free_list - Frees a list
 * @head: The head of the list to freed
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
