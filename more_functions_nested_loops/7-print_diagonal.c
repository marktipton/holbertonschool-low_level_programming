#include "main.h"

/**
 * print_diagonal - prints a diagonal line using backslashes
 *
 * @n: (number of backslashes)
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, dif;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = n;
		dif = (x - n);
		while (dif <= x)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\');
		_putchar('\n');
	}
}
