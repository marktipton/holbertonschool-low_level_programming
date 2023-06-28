#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *@d: pointer to dog struct
 *@name: name of dog
 *@age: dog age
 *@owner: name of owner of dog
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
