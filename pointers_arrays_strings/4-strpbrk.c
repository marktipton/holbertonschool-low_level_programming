#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 *@s: string
 *@accept: acceptable characters
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
					j++;
		}
		i++;
	}
	if (s[i] == '\0')
	{
	return NULL;
	}
	return (0);
}
