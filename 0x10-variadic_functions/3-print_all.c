#include <stdarg.h>
#include <stdio.h>

/**
 * _strlen - Function for counting the length of string
 * @s: a pointer for counting the strting length
 * Return: int i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 *print_all - A function for printing anything
 *@format: The format specifier to what gets printed
 *Return: Nothing
 */

void print_all(const char *const format, ...)
{
	int j = 0, valid;
	char *str;
	va_list args;

	va_start(args, format);
	while (j < _strlen(format))
	{
		valid = 1;
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%lf", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str)
				printf("%s", str);
			if (!str)
				printf("(nil)");
			break;
		default:
			valid = 0;
			break;
		}
		if (valid && j != _strlen(format) - 1)
			printf(", ");
		j++;
	}
	printf("\n");
}
