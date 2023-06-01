#include "main.h"

/**
 * print_square - prints a square made out of ###
 *
 * @size: size of square
 * Return: Always 0.
 */
void print_square(int size)
{
int length = size, width = size;

if (size <= 0)
{
	_putchar('\n');
}
else
{
	while (length > 0)
	{
		while (width > 0)
		{
			_putchar('#');
			width--;
		}
		_putchar('\n');
		width = size;
		length--;
	}
}
}
