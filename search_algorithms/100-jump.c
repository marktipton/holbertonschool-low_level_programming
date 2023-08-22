#include "search_algos.h"
#include <math.h>

int _min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (array == NULL)
		return (-1);
	
	step = sqrt(size);
	prev = 0;

	while (array[_min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}


	while (array[prev] < value)
	{
		prev++;

		if (prev == _min(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
