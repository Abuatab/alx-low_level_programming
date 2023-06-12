#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function to print the length of a string
 * @s: string to be supplied
 * Return: Always 0 (Success)
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
 *_strdup - creates a duplicate of a string
 * @str: The string to be duplicated
 * Return: A pointer to the string
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * _strlen(str));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(str); i++)
	{
		p[i] = str[i];
	}
	return (p);
}
