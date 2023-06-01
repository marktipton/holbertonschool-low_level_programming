#include "main.h"

/**
 * print_diagonal - prints a diagonal line using backslashes
 *
 * @n: (number of backslashes)
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = n, y = n;
		while (x > 0)
		{
			while ((n - y) > 0)
			{
				_putchar(' ');
			}
			y--;
			x--;
			_putchar(92);
			_putchar('\n');
		}
	}
}
