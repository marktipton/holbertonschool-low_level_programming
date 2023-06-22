#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2 dimensional array or NULL 0 or <0
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **mcgriddle = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (mcgriddle == NULL)
		return (NULL);
	while (i < height)
	{
		j = 0;
		mcgriddle[i] = malloc(width * sizeof(int));
		if (mcgriddle[i] == NULL)
		{
			while (j < i)
			{
				free(mcgriddle[j]);
				j++;
			}
			free(mcgriddle);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			mcgriddle[i][j] = 0;
		}
		i++;
	}
	return (mcgriddle);
}
