#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array dynamically
 * @size: size of the array
 * @c: the charcter filling the array
 * Return: a pointer to an array of char
 */

char *create_array(unsigned int size, char c)

{
	int i;
        char *s = (char *) malloc(size * sizeof(int));

        if (s == NULL)
        {
                return (NULL);
        }
	else
	{
		for (i = 0; i < (int)size; i++)
		{
			s[i] = c;
		}
		return (s);
	}
        free(s);
}
