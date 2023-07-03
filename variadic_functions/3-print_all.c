#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - variadic function that prints any type
 *@format: a list of types of arguments passed to function
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list(ap);
	unsigned int i;

	va_start(ap, format); 
        i = 0;

        while (format != NULL && format[i] != '\0')
        {
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				if (va_arg(ap, char *) == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(ap, char *)); 
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[i + 1] != '\0')
		printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
