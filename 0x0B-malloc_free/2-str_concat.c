#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - measures the length of the string
 * @s: The string to be measured
 * Return: The length of the string
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
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, tmp;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc((sizeof(char) * (_strlen(s1) + _strlen(s2))) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	tmp = i;
	for (i = 0; i <= _strlen(s2); i++, tmp++)
	{
		p[tmp] = s2[i];
	}
	return (p);
}
