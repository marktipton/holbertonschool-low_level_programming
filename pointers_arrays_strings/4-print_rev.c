#include "main.h"

/**
 * print_rev - prints string and \n in reverse
 *
 * @str: string to be printed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
