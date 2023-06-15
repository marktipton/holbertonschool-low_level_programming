#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns factorial of a given number
 *@x: number
 *@y: power
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
{
	return (x * _pow_recursion(x, y - 1));
}
if (y == 0)
{
	return (1);
}

return (-1);
}
