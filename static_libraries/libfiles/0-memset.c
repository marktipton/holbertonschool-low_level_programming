#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory ith constant byte
 * @n: fill first n bytes of memory
 * @b: constant byte
 * @s: pointer to memory area
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while ((s[i] != '\0') && (i < n))
{
	s[i] = b;
	i++;
}
if (s[i] == '\0')
{
	s[i] = b;
}
return (s);
}
