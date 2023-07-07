#include <stdio.h>

/**
 * int_index - searches for an int
 * @array: The array to be searched
 * @size: Size of the array
 * @cmp: A function ptr for the type of search
 * Return: The index of where the int is
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
