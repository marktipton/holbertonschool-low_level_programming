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
	if (c < 10)
	{
	_putchar(c + '0');
	}
	else
	{
	e = c % 10;
	d = c / 10;
	_putchar(d + '0');
	_putchar(e + '0');
	}
	if (b == 9)
	{
	;
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	}
	b++;
	c = a * b;
	if (c < 10)
	{
	_putchar(' ');
	}
	}
	_putchar('\n');
	a++;
	b = 0;
	}
}


