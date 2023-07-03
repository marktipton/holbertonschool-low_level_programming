#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints stringss followed by a new line
 *@separator: string to be printed between strings
 *@n: number of integers passed to function
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	i = 0;

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			printf("(nil)");
		printf("%s", atoi(va_arg(ap, char *)));
		if (separator != NULL || (i != n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
