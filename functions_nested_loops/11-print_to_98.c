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
while (1)
	{
	if (n == 98)
        {
        printf("%d", n);
        _putchar('\n');
        goto end;
        }
	if (n < 0)
	{
	printf("%d, ", n);
	}
	else
	{
	printf("%d, ", n);
	}
	if (n > 98)
	{
	n--;
	}
	else
	{
	n++;
	}
	}
end:;
_putchar('\n');
}


