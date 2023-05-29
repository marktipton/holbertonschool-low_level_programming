#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - somethings
 *
 * @n: (take this integer and print every number between it and 98)
 * Return: always 0
 */
/* betty style doc for function main goes there */
void print_to_98(int n)
{
if (n == 98)
{
_putchar('0' + n);
_putchar('\n');
}
while (n != 98)
	{
		if (n < 0)
		{
		_putchar('-');
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		}
		else
		{	
		_putchar('0' + n);
		_putchar(',');
                _putchar(' ');

		}
	if (n > 98)
	{
	n--;
	}
	else
	{
	n++;
	}
	}
_putchar('\n');
}


