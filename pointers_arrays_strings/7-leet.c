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
char Alower[] = {97, 101, 111, 116, 108};
char Aupper[] = {65, 69, 79, 84, 76};
char Anumbers[] = {52, 51, 48, 55, 49};
int size = 5;

while (s[i] != '\0')
{
	j = 0;
	while (j < size - 1)
	{
		if (s[i] == Alower[j] || s[i] == Aupper[j])
		{
			s[i] = Anumbers[j];
		}
		j++;
	}

	i++;
}
return (s);
}
