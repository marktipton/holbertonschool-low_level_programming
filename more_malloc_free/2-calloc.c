#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **ptr;
	unsigned int i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	*ptr = malloc(nmemb * size);
	for (i = 0; i < size; i++)
	{

		ptr[i] = 0;
	}
}
