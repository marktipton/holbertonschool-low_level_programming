#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given on each element of an array
 * @array: array to execute function on
 * @size: size of array
 * @action: pointer to function to do on array elements
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
