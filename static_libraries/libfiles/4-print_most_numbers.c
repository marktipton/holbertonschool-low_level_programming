#include "main.h"

/**
 * print_most_numbers - print 0 through 9 but skip 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if ((c == 2) || (c == 4))
		{
			c++;
		}
		else
		{
		_putchar(c + '0');
		c++;
		}
	}
	_putchar('\n');
}
