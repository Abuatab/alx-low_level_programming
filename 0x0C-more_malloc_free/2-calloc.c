#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory and initializes it to zero
 * @nmemb: Array of elements
 * @size: Size of each elements in bytes
 * Return: A void pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; (unsigned int)i < nmemb * size; i++)
	{
		*((int *)p + i) = 0;
	}
	return (p);
}
