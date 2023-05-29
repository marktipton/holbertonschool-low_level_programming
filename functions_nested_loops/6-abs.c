#include "main.h"
#include <stdio.h>
/**
 *_abs - somethings
 *
 *@r: (take absv of this integer)
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
int _abs(int r)
{
int a = ((-1) * r);
	if (r >= 0)
	{
		return (r);
	}
	if (r < 0)
	{
		return (a);
	}
_putchar('\n');
return (0);
}
