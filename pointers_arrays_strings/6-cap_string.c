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
char no[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
while (s[i] != '\0')
{
	while (
	if (s[i] == no[j])
	{
		if (s[i+1] >= 97 && s[i+1] <= 122)
		{
			s[i+1] = s[i+1] - 32;
		}	
		
	}
	i++;
}
}
