#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sums a variable amount of ints passed to it
 * @n: The amount of numbers to add
 * Return: The sum of the passed numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int x;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; (unsigned int) i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	return (sum);
}
