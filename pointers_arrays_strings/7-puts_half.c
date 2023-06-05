#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of string
 *
 * @str: string in question
 * Return: Always 0.
 */
void puts_half(char *str)
{
int n;
int length = strlen(str);

if (length % 2)
{
n = length / 2;
}
else
{
n = (length / 2) + 1;
}
while (str[n] != '\0')
{
	_putchar(str[n]);
	n++;
}
_putchar('\n');
}
