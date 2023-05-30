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
int a = 0, b = 0;
int c, d, e;
while (a < 10)
	{
	while (b < 10)
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
	b++;
	}
	a++;
	_putchar('\n');
	}
}


