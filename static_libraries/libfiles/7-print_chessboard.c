#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard in starting position with pieces
 *
 * @a: two dimensional array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
