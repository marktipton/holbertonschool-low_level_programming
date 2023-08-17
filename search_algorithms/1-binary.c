#include "search_algos.h"
/**
 * print_array - prints array of integers
 *
 * @array: array of integers
 * @left: low index
 * @right: high index
 */
void print_array(int array[], size_t left, size_t right)
{
	printf("Searching in array: ");

	while (left <= right)
	{
		printf("%i", array[left]);
		if (left != right)
			printf(", ");
		left++;
	}
	printf("\n");
}
/**
 * binary_search - searches for value in sorted array of integers
 *
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value not found or index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
