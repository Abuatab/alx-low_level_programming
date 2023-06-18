#include <stdio.h>

/**
 * _pow_recursion - Calculates the power of a number
 * @x: The base
 * @y: The exponent
 * Return: x to the power of y on success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
