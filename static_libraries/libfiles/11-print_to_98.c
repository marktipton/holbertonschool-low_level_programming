#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - somethings
 *
 * @n: (take this integer and print every number between it and 98)
 * Return: always 0
 */
/* betty style doc for function main goes there */
void print_to_98(int n)
{
if (n <= 98)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n++;
	}
	printf("\n");
}
else
{
	while (n >= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n--;
	}
	printf("\n");
}
}


