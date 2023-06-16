#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Allocates memory for an array of integers
 * @min: The minimum value of the array
 * @max: The maximum value of the array
 * Return: A pointer to the allocated array on success
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
