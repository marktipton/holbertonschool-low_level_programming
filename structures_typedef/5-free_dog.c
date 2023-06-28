#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the dogs
 *@d: dogs
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d);
}
