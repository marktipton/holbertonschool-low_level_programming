#include <stdio.h>
#include "main.h"
/**
 *times_table - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes the*/
void times_table(void)
{
int a, b;
int c, d, e;
for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
	c = a * b;
	if (c > 9)
	{
	e = c % 10;
	d = c / 10;
	_putchar(',');
	_putchar(' ');
	_putchar(d + '0');
	_putchar(e + '0');
	}
	else
	{
		if (b != 0)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		_putchar(c + '0');
	}
	}
	_putchar('\n');
	b = 0;
	}
}


