#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: A pointer to a variable of type struct dog
 * @name: A pointer to the name of the dog
 * @age: The age of the dog
 * @owner: A pointer to the name of the owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
