#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string using recursion
 *@s: string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int len = 0;

if (*s == '\0')
{
	return (len + 1);
}
else
{
	len++;
	_strlen_recursion(s + 1);
}
return (0);
}
