#include "main.h"
#include <stdio.h>

/**
 * calc - returns square root if perfect square
 * @n: integer
 * @i: square root of n
 *
 *
 *
 * _sqrt_recursion - returns natural square root of number
 *@n: number
 * Return: Always 0.
 */
int calc(int n, int i)
{
if (i * i == n)
{
	return (i);
}
if (i * i > n)
{
	return (-1);
}
calc(n, i + 1);
return (0);
}

int _sqrt_recursion(int n)
{
if (n > 0)
{
        return (calc(n, 0));
}

return (-1);
}

