#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - check the code
 *@d: pointer to dog struct
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
