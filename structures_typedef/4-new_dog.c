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
	dog_t *new_dog = malloc(sizeof(dog_t));
	
	if (new_dog == NULL)
		return (NULL);
	
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
        }

	strcpy(new_dog->owner, owner);
	strcpy(new_dog->name, name);

	new_dog->age = age;
	return (new_dog);
}
