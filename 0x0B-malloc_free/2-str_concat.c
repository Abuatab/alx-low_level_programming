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
 *str_concat - duplicates a string
 *@s1: The 1st string
 *@s2: The 2nd string
 *Return: a pointer the duplicated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	j = _strlen(s1);
	k = _strlen(s2);
	s = (char *)malloc((j + k + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < k + j; i++)
	{
		s[j + i] = s2[i];
	}
	s[i] = '\0';
	return (s);
}
