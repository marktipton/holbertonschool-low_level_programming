#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - converst a string to an integer
 *
 * @s: string to turn into int
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i = 0;
	int lessthanzero = 0;
	int number = 0;

while (s[i] != '\0')
{
	if (s[i] == '-')
	{
		lessthanzero++;
	}
	if ((s[i] >= 48) && (s[i] <= 57))
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}
	else
	{
		i++;
	}
}
if (lessthanzero % 2 == 0)
{
	lessthanzero = 1;
}
else
{
	lessthanzero = -1;
}
	return (lessthanzero * number);
}
