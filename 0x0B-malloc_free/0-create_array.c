#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array to be filled with characters
 * @size: The size of the array
 * @c: The character to fill in the array
 * Return: Always 0(Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
