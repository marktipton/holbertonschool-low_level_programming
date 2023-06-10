#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @needle: the substring
 *
 * @haystack: the string to search
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				j++;
				i++;
			}
			else
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack);
		}
		i++;
	}
	if (haystack[i] == '\0')
	{
		return (NULL);
	}
	return (0);
}

