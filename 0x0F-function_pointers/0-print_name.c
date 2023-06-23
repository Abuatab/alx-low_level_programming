#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: A pointer to the function that determines how to print name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
