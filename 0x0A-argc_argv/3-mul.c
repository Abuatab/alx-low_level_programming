#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument counter
 * @argv: string of arguments
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
