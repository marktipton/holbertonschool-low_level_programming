#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @n: copy n bytes of memory
 * @src: memory source
 * @dest: pointer to memory area destination
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while ((dest[i] != '\0') && (i < n))
{
	dest[i] = src[i];
	i++;
}
return (dest);
}

