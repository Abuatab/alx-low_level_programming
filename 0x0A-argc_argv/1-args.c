#include <stdio.h>

/**
 *main - Prints the number of arguments passed
 *@argc: The number of arguments
 *@argv: The string of arguments
 *Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
}
