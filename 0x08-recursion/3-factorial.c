#include <stdio.h>

/**
 * factorial - calculates the factorial of a number
 * @n: The number to calculate the factorial for
 * Return: The factorial of the number on success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
