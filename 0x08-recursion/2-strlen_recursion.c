#include <stdio.h>

/**
 * _strlen_recursion - prints strlen of a string using recursion
 *@s: The string to measure
 *Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	static int i;

	i = 0;
	if (*s == '\0')
	{
		return (i);
	}
	_strlen_recursion(s + 1);
	i++;
}
