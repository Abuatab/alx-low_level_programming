#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: The length of the array.
 *
 * Return: NULL on error or a pointer to the new hash table on success.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int index;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		new_ht->array[index] = NULL;

	return (new_ht);
}
