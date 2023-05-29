#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
void print_to_98(int n)
{
while (n != 98)
	{
		if (n < 0)
		{
		_putchar('-');
		return (n);
		_putchar(',');
		_putchar(' ');
		}
		else
		{	
		return (n);
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


