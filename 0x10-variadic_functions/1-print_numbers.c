#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: A character for separating the numbers
 * @n: The amount of numbers to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	for (i = 0; (unsigned int) i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator)
		{
			if ((unsigned int)i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
