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
	int nb = 0;

if (s[0]
while (s[i] != '\0')
{
	if ((s[i] > 48) && (s[i] < 57))
	{
		while((s[i]) > 48) && (s[i])
		{
			nb = nb * 10 + (s[i] - 48);					
			i++;
		}	
		return;
	}

}
	return (0);
}
