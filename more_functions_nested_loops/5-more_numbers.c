#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int x = 0, y;

	while(x < 15)
	{
		y = (x * 10);
		_putchar(y + '0');
		x++;
	}
	_putchar('\n');
}
