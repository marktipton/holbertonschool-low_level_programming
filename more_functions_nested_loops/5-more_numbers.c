#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 ten times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int y, x = 0;

while (x < 10)
{
	y = 0;
	while (y < 15)
	{
		if (y > 9)
		{
			_putchar((y / 10) + '0');
		}
		_putchar((y % 10) + '0');
		y++;
	}
	_putchar('\n');
	x++;
}
}
