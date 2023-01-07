#include <stdio.h>

/**
 * main - something
 * Return: something
 */

int main(void)
{
int i;
int prev = 1;
int curr = 2;
int next;

for (i = 0; i < 50; i++)
{
	printf("%d, ", prev);

	next = prev + curr;
	prev = curr;
	curr = next;
}

printf("\n");

return (0);
}
