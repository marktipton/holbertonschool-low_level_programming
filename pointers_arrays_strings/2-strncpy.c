#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
n = 0;

while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}
dest[n] = '\0';
return (dest);

}
