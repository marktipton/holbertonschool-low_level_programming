#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while(dest[i] != '\0')
	{
		++dest;
		i++;
	}
	while(dest[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (dest);
}
