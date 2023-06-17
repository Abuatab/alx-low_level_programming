#include <stdio.h>
#include <stdlib.h>

/**
 * isdigit - checks for digits
 * @c: parameter
 * Return: 0 or 1
 */
int isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_number - checks if a string is a number
 * @s: string to check
 * Return: 1 if s is a number, 0 otherwise
 */
int is_number(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - prints all arguments
 * @argc: argument counter
 * @argv: array of arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
