#include <stdlib.h>

/**
 * malloc_checked - Checks if there is enough space and allocates it on success
 * @b: Number of bytes to allocate
 * Return: A void pointer to the allocated space on success and 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
