#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be added to
 * @src: string to be added
 * @n: number of bytes to be added
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}


	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
