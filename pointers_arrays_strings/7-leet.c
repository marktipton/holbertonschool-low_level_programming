#include "main.h"
#include <stdio.h>

/**
 * leet - coverts string to leet
 *
 * @s: string to convert to leet
 * Return: Always 0.
 */
char *leet(char *s)
{

int i = 0, j = 0;
char Aletters[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
char Anumbers[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};
int size = 10;

while (s[i] != '\0')
{
	j = 0;
	while (j < size - 1)
	{
		if (s[i] == Aletters[j])
		{
			s[i] = Anumbers[j];
		}
		j++;
	}

	i++;
}
return (s);
}
