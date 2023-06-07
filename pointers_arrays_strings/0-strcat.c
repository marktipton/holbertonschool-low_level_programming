#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: concatenated string
 * @src: string to be tacked on to dest
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		++dest;
		i++;
	}
	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (dest);
}
