#include <stdio.h>

/**
 * array_iterator - Executes action on the given array
 * @array: The array to execute action on
 * @action: A pointer to a function with an int parameter
 *@size: The size of the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; (unsigned long) i < size; i++)
	{
		action(array[i]);
	}
}
