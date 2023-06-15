#include "main.h"

/**
 * print_triangle - prints a triangle using spaces and ###
 *
 * @size: size of triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int x, y, z;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	x = 1;
	while (x <= size)
	{
		y = size - x;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		z = x;
		while (z > 0)
		{
		_putchar('#');
		z--;
		}
	_putchar('\n');
	x++;
	}
}
}
