#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * @dest: copy destination
 * @src: copy source
 * @n: number of bytes to be copied
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (i = 0; (i < n) && (src[i] != '\0'); i++)
{
	dest[i] = src[i];
}
for ( ; i < n; i++)
{
	dest[i] = '\0';

}
return (dest);

}
