#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to function
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;


	va_start(ap, n);
	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, const unsigned int));
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
