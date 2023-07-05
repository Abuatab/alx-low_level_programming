#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the name, age, and owner of a dog
 * @d: pointer to a struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
			printf("Owner: %s\n", d->owner);
	}
}
