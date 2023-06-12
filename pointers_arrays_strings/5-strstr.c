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
	int j = 0;
	int count;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j++;

			if (count == 0)
			{
				count = i;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[count]);
			}
		}
		else
		{
			count = 0;
			j = 0;
		}

		i++;
	}

return (NULL);
}

