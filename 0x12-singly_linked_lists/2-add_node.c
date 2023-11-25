#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a node at the beginning of the list
 * @head: The node to be added
 * @str: The node's string
 * Return: The address of the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
