#include "main.h"

/**
 * print_diagonal - prints a diagonal line using backslashes
 *
 * @n: (number of backslashes)
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, placeholder;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;
		placeholder = n;
		while (n > 0)
		{
			while((x > 0) && (x <= placeholder))
			{
				_putchar(' ');
			}
			x++;
			n--;
			_putchar(92);
			_putchar('\n');
		}
	}
}
