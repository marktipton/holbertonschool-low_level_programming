#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));

	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(strlen(name) + 1);
	ndog->owner = malloc(strlen(owner) + 1);

	if (ndog->name == NULL || ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	strcpy(ndog->owner, owner);
	strcpy(ndog->name, name);

	ndog->age = age;
	return (ndog);
}
