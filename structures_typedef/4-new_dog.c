#include <stdio.h>
#include "dog.h"
#include "9-strcpy.c"
#include "2-strlen.c"
/**
 * new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t)); 
	if (dog == NULL)
		return NULL;

	_strcpy(dog->name, name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}	

	dog->age = age;

	_strcpy(dog->owner, owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
