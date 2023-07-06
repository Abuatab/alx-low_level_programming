#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a dog with new characteristics
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The name of the new owner
 * Return: A pointer of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
