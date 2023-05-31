#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if character is an uppercase letter.
 *
 * @c: (integer ascii character to check)
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
