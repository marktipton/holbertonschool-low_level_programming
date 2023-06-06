#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - converst a string to an integer
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i = 0;
	int lessthanzero = 1;
	int number = 0;

if (s[0] == '-')
{
	lessthanzero = -1;
	i++;
}
else if (s[0] == '+')
{
i++;
}
while (s[i] != '\0')
{
	if ((s[i] >= 48) && (s[i] <= 57))
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}
	else
	{
		break;
	}
}
	return lessthanzero * number;
}
