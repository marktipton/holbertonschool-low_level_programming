#include <stdio.h>
#include "main.h"
/**
 *times_table - somethings
 *
 *
 *
 * Return: always 0
 */
/* betty style doc for function main goes the*/
void times_table(void)
{
int a = 0, b = 0;
int c = a * b;
int d = c / 10;
int e = c % 10;
while (a < 10)
	{
	while (b < 10)
	{
	if (c < 10)
	{
	_putchar(c + '0');
	}
	else
	{
	_putchar(d + '0');
	_putchar(e + '0');
	}
	_putchar(',');
	_putchar(' ');
	b++;
	if (c < 10)
	{
		_putchar(' ');
	}
	}
	_putchar('\n');
	a++;
	b = 0;
	}
_putchar('\n');
}


