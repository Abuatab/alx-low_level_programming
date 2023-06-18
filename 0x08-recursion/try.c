#include <stdio.h>

void _print_rev_recursion(char *s)
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
	{
		;
	}
	for(; i >= 0; i--)
	{
		putchar(s[i]);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_print_rev_recursion("\nColton Walker");
	return (0);
}
