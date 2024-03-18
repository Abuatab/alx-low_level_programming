#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a node at the end of the list
 * @head: The head of the node
 * @str: The string of the node to be added
 * Return: A pointer to the head of the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t str_len = 0;
	list_t *ptr;
	list_t *last;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	while (str[str_len])
		str_len++;
	ptr->len = str_len;
	ptr->str = strdup(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = ptr;
	return (*head);
}
