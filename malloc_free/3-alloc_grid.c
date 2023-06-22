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
	int **mcgriddle = malloc(width * height * sizeof(int));
	
	if (mcgriddle == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			mcgriddle[i][j] = 0;
			j++;
		}
		i++;
	}
	return (mcgriddle);
}
