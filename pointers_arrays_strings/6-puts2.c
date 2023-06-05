#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string in question
 * Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
	_putchar(str[i]);
	i += 2;
}
_putchar('\n');
}
