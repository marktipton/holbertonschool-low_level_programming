#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a given number
 *@n: get the factorial of this number
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n == 0)
{
	return (1);
}
if (n >= 0)
{
	return (n * factorial(n - 1));
}

return (0);
}
