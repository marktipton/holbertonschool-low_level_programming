#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints string followed by new line
 *@s: string to print
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int i = 0;
int len = strlen(s) - 1;

if (i < len)
{
	_putchar(s[i]);
}
_puts_recursion(s + 1);
}
