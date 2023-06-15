#include "main.h"
#include <stdio.h>
/**
 * calc - returns 1 if prime
 *@n: number
 *@i: divisor
 *
 * Return: Always 0.
 */
int calc(int n, int i)
{
if ((n % i == 0) && (i < n))
{
	return (0);
}
else if (n == i)
{
	return (1);
}
else
{
	return (calc(n, i + 1));
}
}

/**
 * is_prime_number - returns 1 if the input is a prime number
 *@n: number
 * Return: Always 0.
 */
int is_prime_number(int n)
{

	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (calc(n, 2));
}
