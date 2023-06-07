#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] + '0' >= 97) && (s[i] + '0' <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
