#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 *@s: string in question
 *@c: character to locate
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i = 0;


while (s[i] != '\0')
{
	if (s[i] == c)
	{
		return (s);
	}
	i++;
}
if (s[i] == '\0')
{
	return (NULL);
}
return (0);
}
