#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to search
 * @size: number of elements in array
 * @cmp: pointer to function that compares values
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
if (cmp != NULL && array != NULL)
{
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] == 1))
			return (i);
	}
	return (-1);
}
}
