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
 *string_nconcat - concatenates s1 to n bytes of s2
 *@s1: The first srtring
 *@s2: The second string
 *@n: The number of strings from s2 to concatenate to s1
 *Return: A pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(sizeof(char) * (_strlen(s1) + n + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	j = i;
	for (i = 0; i < (int)n; i++, j++)
	{
		p[j] = s2[i];
	}
	p[j] = '\0';

	return (p);
}
