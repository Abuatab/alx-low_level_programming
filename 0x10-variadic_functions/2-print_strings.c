#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: A character to separate the strings
 * @n: The amount of strings to print
 * Return - Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; (unsigned int) i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
		{
			printf("%s", s);
			if (separator)
			{
				if ((unsigned int)i != n - 1)
				{
					printf("%s",
					       separator);
				}
			}
		}
		else
		{
			printf("(nil)");
			{
				if ((unsigned int)i != n - 1)
				{
					printf("%s",
					       separator);
				}
			}
		}
	}
	printf("\n");
}
