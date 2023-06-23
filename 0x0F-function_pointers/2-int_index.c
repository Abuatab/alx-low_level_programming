#include <stdio.h>

/**
 *int_index - searches for a function and compares it
 * @array: The array to compare
 * @size: Size of the array
 * @cmp: A pointer to the type of function we will use to compare
 * Return: The index where it matched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return -1;
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
