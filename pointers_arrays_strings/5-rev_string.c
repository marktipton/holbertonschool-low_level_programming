#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int lngth = strlen(s);
	int begin = 0;
	int end = lngth - 1;
	while (end > begin)
	{
		char placeholder = s[begin];
		s[begin] = s[end];
		s[end] = placeholder;
		begin++;
		end--;
	}
}
