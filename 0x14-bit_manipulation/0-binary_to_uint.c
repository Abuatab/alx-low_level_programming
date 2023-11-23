#include "main.h"

/**
 * _strlen - measures the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * binary_to_uint - changes binary to integer
 * @b: the string of binary
 * Return: the converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = _strlen(b);
	unsigned int sum = 0;
	unsigned int pow = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += pow;
		else if (b[i] != '0')
			return (0);
		pow *= 2;
	}

	return (sum);
}
