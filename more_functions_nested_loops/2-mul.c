#include "main.h"
#include <stdio.h>

/**
 * mul - multiply two integers
 *
 * Return: Always 0.
 */
int mul(int a, int b)
{
	int c = a * b;
	if (c < 0)
	{
		_putchar('-');
		while (c <= 0)
		{
		_putchar(c);
		_putchar('\n');
		}
	}
	return (0);
}
