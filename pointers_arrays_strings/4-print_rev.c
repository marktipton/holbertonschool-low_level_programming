#include "main.h"
#include <string.h>

/**
 * print_rev - prints string and \n in reverse
 *
 * @s: string to be printed
 * Return: Always 0.
 */
void print_rev(char *s)
{
int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
_putchar('\n');
}
