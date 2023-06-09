#include "main.h"
#include <stdio.h>

/**
 * calc - returns square root of number if  perfect square
 *@n: number
 *@i: square root of number
 * Return: Always 0.
 */
int calc(int n, int i)
{
if (i * i == n)
{
	return (i);
}
else if (i * i > n)
{
	return (-1);
}
else
{
	return (calc(n, i + 1));
}
}

/**
* _sqrt_recursion - returns square root if perfect square
* @n: integer
*
*Return: always 0.
*/

int _sqrt_recursion(int n)
{
if (n > 0)
{
	return (calc(n, 0));
}
else
{
	return (-1);
}
}

