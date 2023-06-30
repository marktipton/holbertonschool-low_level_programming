#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 *@n: constant integers passed to function
 * Return: 0 if n == 0, otherwise returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	if (n == 0)
		return (0);

	va_start(ap, n);
	i = 0;

	for (i = 0; i < n; i++)
	{
		j += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (j);
}
