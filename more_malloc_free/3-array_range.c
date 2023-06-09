#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: pointer to array or NULL if malloc fails||min > max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
