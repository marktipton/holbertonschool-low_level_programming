#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words in a string
 *
 * @s: capitalize words of this string
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int i = 0, j = 0;
char wordsep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
int size = 13;

while (s[i] != '\0')
{
	if ((i == 0) && (s[i] >= 97 && s[i] <= 122))
	{
		s[i] = s[i] - 32;
	}
	j = 0;
	while (j < size)
	{
	if (s[i] == wordsep[j])
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			s[i + 1] = s[i + 1] - 32;
		}

	}
	j++;
	}
	i++;
}
return (s);
}
