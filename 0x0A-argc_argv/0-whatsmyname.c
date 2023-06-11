#include <stdio.h>

/**
 *main - print the name of the program
 *@argc: counts the number of arguments
 *@argv: stores the arguments
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
