#include "main.h"
/**
 *_strlen - counts the number of elements in a string
 *@str: the string or to be counted
 *Return: the number of elements
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 *_strdup - duplicates a string
 *@str: the string to be duplicated
 *Return: a pointer the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *s = (char *) malloc((_strlen(str)+1) * sizeof(char));

	if (s == NULL || str == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= _strlen(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
