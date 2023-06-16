#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a block of memory
 * @ptr: The block to reallocate
 * @old_size: Size of ptr
 * @new_size: Size of the new block of memory
 * Return: A void pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *p;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	else
	{
		p = malloc(old_size + new_size);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; (unsigned int)i < old_size; i++)
	{
		p[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
