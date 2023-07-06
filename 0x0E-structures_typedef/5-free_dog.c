#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory allocated by new_dog function
 * @d: A pointer of type dog_t
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
