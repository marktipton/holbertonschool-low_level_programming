#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: string to check against
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int len = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
			}
			if (s[i + 1] !
		j++;
		}
	i++;
	}

	return (len);
}